//
// Created by jitendra on 04.07.21.
//

#ifndef STARTINGC___SHADEDDAATA_H
#define STARTINGC___SHADEDDAATA_H

#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>
#include <vector>
#include <chrono>
#include <condition_variable>

using namespace std;

vector<int> dataVector ;
bool dataReady = false;
condition_variable condsn;
mutex mutx;


void waitfordata(){
    cout<< "waiting for data"<< endl;
//    while(!dataReady.load()){
//        this_thread::sleep_for(100ms);
//    }

    unique_lock<mutex> lock(mutx);
    condsn.wait(lock, [](){ return dataReady;});

    for (int i= 0; i < dataVector.size(); ++ i){
        cout<< dataVector[i]<< endl;
    }
}


void loadData(){
    this_thread::sleep_for(1000ms);
    dataVector = {1,2,3,4,5};
    {
        lock_guard<mutex> lock(mutx);
        dataReady = true;

    }
    cout << "data ready"<< endl;
    condsn.notify_one();
}



void sharedDataDemo(){
    thread t1(loadData);
    thread t2(waitfordata);

    t1.join();
    t2.join();
}

#endif //STARTINGC___SHADEDDAATA_H
