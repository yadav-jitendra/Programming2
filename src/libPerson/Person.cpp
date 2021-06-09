//
// Created by jitendra on 16.04.21.
//

#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

#include <string>

int Person::g_id = 0;

Person::Person(std::string first, std::string last)
:firstName(first), lastName(last)
{
    ++g_id;
}

Person::Person()                                            //calls empty constructor
: Person("Default", "Constructor")               //calls first constructor with value
{
}

Person::~Person(){
}

/**
     * Operator overloading
     */
Person& Person::operator+=(Person const & p){
    firstName += " " + p.firstName;
    lastName += " " + p.lastName;
    id += p.id;

    return *this;
}


int Person::getID() const {
    return id;
}

std::string Person::getFullName() const{
    return firstName + " " + lastName;
}


void Person::setAge(int newAge){
    if (newAge < 0){
        age = 0;
    } else{
        age = newAge;
    }
}

bool Person::operator<( Person const & other) const {
    return this->id < other.id;
}

bool Person::operator<(int v) const {
    return this->id < v;
}

bool operator<(int lhs, Person const & rhs){
    return lhs < rhs.id;
}


