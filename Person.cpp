//
// Created by jitendra on 16.04.21.
//

#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last)
:firstName(first), lastName(last)
{}

Person::Person()                                            //calls empty constructor
: Person("Default", "Constructor")               //calls first constructor with value
{}

Person::~Person(){
    cout << "deleting : " <<firstName << " "<< lastName << endl;
}

std::string Person::printFullName(){
    return firstName + " " + lastName;
}

void Person::setFirstName(std::string fname) {
    firstName = fname;
}

void Person::setLastName(std::string lname) {
    lastName = lname;
}

std::string Person::getFirstName() {
    return firstName;
}

std::string Person::getLastName() {
    return lastName;
}

void Person::setAge(int newAge){
    if (newAge < 0){
        age = 0;
    } else{
        age = newAge;
    }
}

int Person::getAge(){
    return age;
}


