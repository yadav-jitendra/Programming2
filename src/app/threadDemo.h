//
// Created by jitendra on 04.07.21.
//

#ifndef STARTINGC___THREADDEMO_H
#define STARTINGC___THREADDEMO_H

#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>
using namespace std;

class Spinlock{
    atomic_flag flag = ATOMIC_FLAG_INIT;

public:
    void lock(){
        while(flag.test_and_set()){}
    }
    void unlock(){
        flag.clear();
    }
};


int var = 0;
Spinlock spin;

void critical(int change){
    {
        spin.lock();
        var += change;
        cout << this_thread::get_id() << " changed the value" << endl;
        spin.unlock();
    }


    /*{
        static mutex mtx;
        lock_guard<mutex> lockGuard(mtx);
        var += change;
    }*/

    cout << "out of critical zone" << endl;

}
void mythread(){


    thread t([](){ cout << "hello thread" << endl; });

    thread t1(critical, 20);
    thread t2(critical, 30);

    t.join();
    t1.join();
    t2.join();

    cout << "final value "<< var << endl;

}



#endif //STARTINGC___THREADDEMO_H
