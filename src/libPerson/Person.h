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

    static int g_id;
    int id;
    int age;

    friend bool operator<(int lhs, Person const & rhs); // this function can access private variables

public:
    Person();                                           //Empty constructor
    Person(std::string first, std::string last);        // Constructor
    virtual ~Person();

    /**
     * Operator overloading
     */
     Person& operator+=(Person const & p);
     bool operator<(Person const & other) const;
     bool operator<(int v) const;

    void setAge(int newAge);

    int getID() const;
    virtual std::string getFullName() const;


    /**
    * VIRTUAL DEMO
    * to make class ABSTRACT "= 0"
    */
//    virtual std::string getFullName() const = 0;


};

// this is operator overloading does not belong to class Person
// not recommended : only access public variables
// use "friend" instead : see above in private field
bool operator<(int val, Person const & other);

#endif //STARTINGC___PERSON_H
