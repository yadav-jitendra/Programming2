//
// Created by jitendra on 30.06.21.
//

#ifndef STARTINGC___PRECISEDEMO_H
#define STARTINGC___PRECISEDEMO_H



#include <iomanip>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

float addf(vector<float> nums) {
    float sum = nums[0];
    float c = 0.0;

    for (int i = 1; i < nums.size(); i++) {
        float y = nums[i] - c;
        float t = sum + y;
        c = (t - sum) - y;
        sum = t;
    }
    return sum;
}

void precise(){
    using namespace std;
    int k = 1'000'000;

    vector<float> num ;

    for (int i = 0; i < k; ++i) {
        num.push_back(0.0001f);
        num.push_back(0.1999f);
        num.push_back(0.8f);
    }

    auto l = addf(num);
    cout <<fixed<< l <<endl;
}


#endif //STARTINGC___PRECISEDEMO_H
