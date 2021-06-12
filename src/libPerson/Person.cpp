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
:firstName(first), lastName(last), id(g_id)
{
    ++g_id;
}

Person::Person()                                            //calls empty constructor
: Person("Default", "Constructor")               //calls first constructor with value
{
}

Person::~Person(){
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


/**
     * Operator overloading
     */
Person& Person::operator+=(Person const & p){
    firstName += " " + p.firstName;
    lastName += " " + p.lastName;
    id += p.id;

    return *this;
}

bool Person::operator<( Person const & other) const {
    //return this->id < other.id;
    if (this->firstName == other.firstName){
        return this->lastName < other.lastName;
    }
    return this->firstName < other.firstName;
}

bool Person::operator<(int v) const {
    return this->id < v;
}

bool operator<(int val, const Person &other) {
    return val < other.getID();
}
