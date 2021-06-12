//
// Created by jitendra on 12.06.21.
//

#include <iostream>
#include <vector>
#include <queue>

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
}


