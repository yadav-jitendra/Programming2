//
// Created by jitendra on 20.04.21.
//

#ifndef STARTINGC___STUDENT_H
#define STARTINGC___STUDENT_H


#include "Person.h"

class Student : public Person{
private:
    std::string matrikelNummer;

public:
    Student(std::string fist,std::string last,std::string matrikel );
    void setMatrikel(std::string matrikel);
    std::string getMatrikel();

};


#endif //STARTINGC___STUDENT_H
