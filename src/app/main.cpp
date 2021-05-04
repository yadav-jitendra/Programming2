#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "functions.h"
#include "Person.h"
#include "Student.h"

int increment(int& x){
    return ++x;
}

enum class Status{
    started,
    workInProgress,
    completed

};

int main() {

    // Call by value vs reference
    int k = 0;
    int& rk = k;            // reference of k : k and rk are two names of same object

    int k2 = 1;
    rk = k2;                // this will change the value of rk and also k !
    increment(k);

    int one = 1;
    one = plusOne(one);

    Person p1("Hari", "Prasad") ;
    Person p1Copy(p1);
    p1Copy.setFirstName("copy");
    p1Copy.setLastName("p1");
    Person p3;

    Student s("raju", "yadav", "12345");
    s.getMatrikel();

    cout << p1.printFullName()<< endl;
    cout << p1Copy.printFullName()<< endl;
    cout << p3.printFullName()<< endl;
    cout << p3.getFirstName()<< endl;
    cout << p3.getLastName()<< endl;
    cout << s.printFullName() << endl;

    p1.setAge(-10);
    cout << "age: "<<p1.getAge()<< endl;

    Status status = Status::workInProgress;


    return 0;



}
