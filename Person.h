//
// Created by jitendra on 16.04.21.
//

#ifndef STARTINGC___PERSON_H
#define STARTINGC___PERSON_H

#include <string>

class Person {
public:
    std::string firstName;
    std::string lastName;

    Person(std::string first, std::string last);        // Constructor
    Person();   //Empty constructor

    //Person() = delete;    // if you want Person p(); should not be allowed
    //Person() = default;

    std::string printFullName();

};


#endif //STARTINGC___PERSON_H
