//
// Created by jitendra on 12.06.21.
//

#include <iostream>
#include <vector>
#include <queue>

void queueDemo(){
    using namespace std;

    queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);

    cout << queue.front() << ", ";
    queue.pop();

    queue.push(4);

    while(!queue.empty()){
        cout << queue.front() << ", ";
        queue.pop();
    }
}