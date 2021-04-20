//
// Created by jitendra on 16.04.21.
//

#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last)
:firstName(first), lastName(last)
{
}

Person::Person()        //calls empty constructor
: Person("Sham", "Prasad")     //calls first constructor with value
{}

std::string Person::printFullName(){
    return firstName + " " + lastName;
}
