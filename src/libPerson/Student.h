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

    virtual ~Student();

    std::string getMatrikel() const;

    std::string getFullName() const override;

};


#endif //STARTINGC___STUDENT_H
