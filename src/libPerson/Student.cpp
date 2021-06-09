//
// Created by jitendra on 20.04.21.
//

#include "Student.h"
#include <iostream>

Student::Student(std::string first, std::string last, std::string matrikel)
: Person(first,last), matrikelNummer(matrikel)
{
}

Student::~Student() {
}

std::string Student::getMatrikel() const{
    return matrikelNummer;
}

std::string Student::getFullName() const{
    return Person::getFullName() + " " + matrikelNummer;
}



