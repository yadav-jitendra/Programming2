//
// Created by jitendra on 30.06.21.
//

#ifndef STARTINGC___MOVESEMANTIK_H
#define STARTINGC___MOVESEMANTIK_H


#include <vector>
#include <algorithm>
#include <iostream>
#include "Person.h"

void createVector(std::vector<int> & result , int numOfItems){
    result.resize(numOfItems);
}

std::vector<int> createVector(int numItems){
    return std::vector<int>(numItems);
}


void moveSemantik(){
    using namespace std;

    auto ptr = make_unique<Person>("Ram", "Prasad");
    cout << ptr.get()  << endl;

    vector< unique_ptr<Person> > v;
    v.push_back(move(ptr));

    cout << v[0]->getFullName() << endl;
    cout << v[0].get()  << endl;
    cout << ptr.get()  << endl; // resources have been passed, and is now null pointer


//    const int sizeV = 100000;
//    vector< vector<int > > v2D(sizeV);
//    auto  v2d2 = v2D;
//
//    for_each(begin(v2D), end(v2D), [&]( vector<int> & row){ createVector(row,sizeV); });
//    cout << endl;
//    for_each(begin(v2D), end(v2D), [&]( vector<int> & row){ row =createVector(sizeV); });

}



#endif //STARTINGC___MOVESEMANTIK_H
