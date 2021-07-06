//
// Created by jitendra on 04.07.21.
//

#ifndef STARTINGC___PRODUCERCONSUMER_H
#define STARTINGC___PRODUCERCONSUMER_H
#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>
#include <vector>
#include <chrono>
#include <condition_variable>

using namespace std;


mutex mtx;
condition_variable cond;
deque<int> sharedData;
const unsigned int maxBufferSize = 50;

void producer(int val){
    while(val){
        unique_lock<mutex> uniqueLock(mtx);
        cond.wait(uniqueLock, [](){ return sharedData.size() < maxBufferSize;});
        sharedData.push_back(val);
        cout << "produced : " << val << endl;
        val--;
        uniqueLock.unlock();
        cond.notify_one();
    }
}

[[noreturn]] void consumer(){
    while (true){
        unique_lock<mutex> uniqueLock(mtx);
        cond.wait(uniqueLock, [](){ return sharedData.size() > 0;});
        int val = sharedData.back();
        sharedData.pop_back();
        cout << "consumed : " << val << endl;
        uniqueLock.unlock();
        cond.notify_one();

    }
}

void producerConsumer(){
    thread t1(producer, 100);
    thread t2(consumer);

    t1.join();
    t2.join();
}
#endif //STARTINGC___PRODUCERCONSUMER_H
