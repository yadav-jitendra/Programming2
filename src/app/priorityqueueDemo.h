//
// Created by jitendra on 12.06.21.
//

#include <iostream>
#include <vector>
#include <queue>
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


void priorityQueueDemo(){
    using namespace std;

    priority_queue<int> priorityQueue;

    vector<int> nums = { 1,4,6,3,7,9};

    for (auto i : nums) {
        priorityQueue.push(i);
    }

    while(!priorityQueue.empty()){
        cout << priorityQueue.top() << ", ";
        priorityQueue.pop();
    }

//    priority_queue<int> p0;
//    p0.push(6);
//    p0.push(6);
//    p0.push(6);
//    p0.push(6);
//    p0.push(6);
//
//    priority_queue<int> p1;
//    p1.push(6);
//    p1.push(6);
//    p1.push(6);
//    p1.push(6);
//    p1.push(6);
//
//    while(!p0.empty()){
//        if (p0.top() == p1.top()){
//            cout << p0.top() << " vs " << p1.top() << endl;
//            p0.pop();
//            p1.pop();
//            continue;
//        }
//        cout << p0.top() << " vs " << p1.top() << endl;
//        break;
////        return (p0.top() < p1.top()) ?  1 : 0;
//    }
}


