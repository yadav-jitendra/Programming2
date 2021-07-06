//
// Created by jitendra on 12.06.21.
//

#ifndef STARTINGC___HELPER_H
#define STARTINGC___HELPER_H

///BadHash Functor
//class BadHash{
//public:
//    int operator()(int) const { return 1; };
//};


/**
 * Template
 * */
#include "templateFunctions.h"
#include "Accumulator.h"
template <class T1, class T2>
T1 mymin(T1 lhs, T2 rhs){
    return (lhs < rhs)? lhs : rhs;
}

int increment(int& x){
    return ++x;
}

enum class Status{
    started,
    workInProgress,
    completed

};


using Address = House*;
class Packet{
public:
    Address address;

};


void testIfAlive(std::unique_ptr<int> const & ptr){
    if (ptr){
        cout << "still alive" << endl;
    } else{
        cout << "Gone" << endl;
    }
}

// Slicing without const &
void printfullname(Person const & per){
    cout << per.getFullName() << endl;
}

/**
 * Interface
 * */
class Iplayable{
public:
    virtual void init() = 0;
};


/**polymorphism*/
void printMatrikelNr(Person const & p){
    Student const * student = dynamic_cast<Student const *>(&p);
    if (student){
        cout << student->getMatrikel() << endl;
    } else{
        cout << "Casting not possible" << endl;
    }
}



#endif //STARTINGC___HELPER_H
