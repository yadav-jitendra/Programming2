//
// Created by jitendra on 16.04.21.
//

#ifndef STARTINGC___PERSON_H
#define STARTINGC___PERSON_H

#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person();                                           //Empty constructor
    Person(std::string first, std::string last);        // Constructor
    ~Person();

    void setFirstName(std::string fname);
    void setLastName(std::string lname);
    void setAge(int newAge);

    std::string getFirstName();
    std::string getLastName();
    int getAge();

    std::string printFullName();

};


#endif //STARTINGC___PERSON_H
