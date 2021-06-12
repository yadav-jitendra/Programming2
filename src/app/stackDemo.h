//
// Created by jitendra on 12.06.21.
//
#include <iostream>
#include <vector>
#include <stack>
void stackDemo(){
    using namespace std;

    vector<int> nums ={1,2,3,4,5};

    stack<int> stack;

    for (auto i: nums){
        stack.push(i);
    }

    vector<int> reverted;
    while(!stack.empty()){
        reverted.push_back(stack.top());
        stack.pop();
    }

    for (auto i: nums) {
        cout << i << ", ";
    }

    cout << endl;

    for (auto i: reverted) {
        cout << i << ", ";
    }
}