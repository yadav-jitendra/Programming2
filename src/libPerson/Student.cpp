//
// Created by jitendra on 20.04.21.
//

#include "Student.h"

Student::Student(std::string first, std::string last, std::string matrikel)
: Person(first,last), matrikelNummer(matrikel)
{}

void Student::setMatrikel(std::string matrikel){
    matrikelNummer = matrikel;
}
std::string Student::getMatrikel(){
    return matrikelNummer;
}
