
#ifndef STARTINGC___MULTITHREADING_H
#define STARTINGC___MULTITHREADING_H

#include <iostream>
#include <thread>
#include <mutex>
#include <deque>
#include <condition_variable>
#include <future>
using namespace std;


int factorial(future<int> & fut){
    int res = 1;

    int n = fut.get();
    for (int i = n; i>1 ; --i) {
       res *= i;
    }
    //cout << "Result is : " << res << endl;
    return res;
}


void main_futurePromiseAsync(){
    int val;

    promise<int> promise1;
    future<int> future2 = promise1.get_future();


    //future<int> future1 = async(factorial, 3);  /// used to get returned value from function
    //future<int> future1 = async(launch::deferred,factorial, 3); // No new thread will be created
    future<int> future1 = async(launch::async,factorial, std::ref(future2)); // new thread will be created
    promise1.set_value(4);

    val = future1.get();

    cout << "Result is : " << val << endl;


}






/// producer Consumer
//deque<int> q;
//mutex m1;
//condition_variable cond1;
//
//void prod(){
//    int num = 10;
//    while (num > 0){
//        unique_lock<mutex> lock(m1);
//        q.push_front(num);
//        lock.unlock();
//
//        cond1.notify_one(); // notify t2
//
//        this_thread::sleep_for(chrono::milliseconds(1000));
//        num--;
//    }
//}
//
//void consum(){
//    int data = 0;
//    while (data != 1){
//        unique_lock<mutex> lock(m1);
//        cond1.wait(lock, [](){ return !q.empty();});   // this will put t2 to sleep untill notified by t1, may cause spurious wake
//        data = q.back();
//        q.pop_back();
//        lock.unlock();
//
//        cout << "got value from producer :" << data << endl;
//
//
//    }
//}
//
//void main_prodConsum(){
//    thread t1(prod);
//    thread t2(consum);
//
//    t1.join();
//    t2.join();
//}











/// mutex
//std::mutex mtx1;
//
//void shared_print(string msg, int num){
//    //mtx1.lock();  // not recommended
//                    // bcoz when exception occurs in this function,
//                    // mtx1 will never be unlocked
//
//    //lock_guard<mutex> guard(mtx1);   // will automatically release lock
//                                        // when out of scope -- when out of this function
//
//    unique_lock<mutex> uniqueLock(mtx1);    // this is used for fine locking , this lock can be moved while lockguard cannot
//    cout << msg << num << endl;
//    uniqueLock.unlock();
//    // ... do other things without locking
//    cout << "   out of lock" << endl;
//
//    //mtx1.unlock();
//}
//
//void t_function_1(){
//    for (int i = 0; i < 10; ++i) {
//        shared_print("From child :", i);
//    }
//}
//
//void main_mutex(){
//    thread t3(t_function_1);
//    for (int i = 0; i < 10; ++i) {
//        shared_print("From main :", i);
//    }
//
//    t3.join();
//}








/// basics
//class Funktor {
//public:
//    void operator()(string msg){
//        cout << "from Functor " << endl;
//
//    }
//};

//void t_main(){
//    //thread t1(t_function_1); // t1 starts running
//
//    cout << this_thread::get_id() << endl;
//
//    string s = " hello string";
//    thread t1((Funktor()), s );
//    cout << t1.get_id() << endl;
//
//    thread t2 = move(t1); // t1 has been moved -- cant join
//    cout << t2.get_id() << endl;
//
//    t2.join(); // t_main thread waits for t1 to finish
//
//}










//try {   // this ensures t1 will be joined if an exception occurs in main thread.
//cout << "from main " << endl;
//} catch (...){
//t1.join();
//throw ;
//}

//t1.detach(); // t1 will run freely on its own --daemon process


// t1.join(); // crash -- cannot join once detached
//    if(t1.joinable()){
//        t1.join();
//    }

#endif //STARTINGC___MULTITHREADING_H

