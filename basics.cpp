#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "functions.h"
#include "Person.h"

int increment(int& x){
    return ++x;
}

int main() {

    // Call by value vs reference
    int k = 0;
    int& rk = k;// reference of k : k and rk are two names of same object

    int k2 = 1;
    rk = k2;    // this will change the value of rk and also k !
    increment(k);

    int one = 1;
    one = plusOne(one);

    printNmae();

    Person p1("Hari", "Prasad") ;
    Person p1Copy(p1);

    Person p2("sham", "prasad") ;

    Person p3;    // this is not a constructor but a method "p3" declaration with return type Person

    cout << p1.printFullName()<< endl;
    cout << p1Copy.printFullName()<< endl;
    cout << p2.printFullName()<< endl;
    cout << p3.printFullName()<< endl;


    return 0;



}
