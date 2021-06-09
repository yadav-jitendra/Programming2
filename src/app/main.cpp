#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <memory>
#include <exception>

#include <typeinfo>
#include "Messenger.h"


#include "functions.h"
#include "Person.h"
#include "Student.h"
#include "House.h"

/**
 * Template
 * */
#include "templateFunctions.h"
#include "Accumulator.h"
template <class T1, class T2>
T1 mymin(T1 lhs, T2 rhs){
    return (lhs < rhs)? lhs : rhs;
}

int increment(int& x){
    return ++x;
}

enum class Status{
    started,
    workInProgress,
    completed

};


using Address = House*;
class Packet{
public:
    Address address;

};


void testIfAlive(std::unique_ptr<int> const & ptr){
    if (ptr){
        cout << "still alive" << endl;
    } else{
        cout << "Gone" << endl;
    }
}

// Slicing without const &
void printfullname(Person const & per){
    cout << per.getFullName() << endl;
}

/**
 * Interface
 */
class Iplayable{
public:
    virtual void init() = 0;
};


/**
polymorphism
*/
void printMatrikelNr(Person const & p){
    Student const * student = dynamic_cast<Student const *>(&p);
    if (student){
        cout << student->getMatrikel() << endl;
    } else{
        cout << "Casting not possible" << endl;
    }
}

/**
 * MAIN METHODE
 */
int main() {
    using namespace std;
/**
    Template
*/
    cout << mymin(1.5, 2) << endl;
    cout << mymin(string("hello "), string("world")) << endl;

//    Person p1("Hari", "prased");
//    Person p2("ram", "kumar");
//
//    cout << ((p1 < p2)? "true" : "false") << endl;
//    cout << "hari ID is smaller than 4 : " << ((p1 < 4)? "true" : "false") << endl;
//    cout << "4 is smaller than hari ID : " << ((4 < p1)? "true" : "false") << endl;

//    Accumulator<Person> acc3(Person("Ram", "kumar"));
//    acc3.add(Person("Hari", "Prassd"));
//    cout << acc3.getValue().getFullName() << endl;

//    Accumulator<double> accumulator(1.3);
//    accumulator.add(1.3);
//    accumulator.add(8.7);
//    cout << accumulator.getValue() << endl;
//
//    Accumulator<string> accumulator2(0);
//    accumulator2.add("Hello ");
//    accumulator2.add("World");
//    cout << accumulator2.getValue() << endl;

//    cout << minimum(string("Hello"), string("world")) << endl;  // template
//    cout << minimum(1,2);  // template
//
    /**
     * Exception
     */
//    vector v = {1,2,3};
//    for (int i = 0; i < v.size() + 1 ; ++i) {
//        try {
//            cout <<  v.at(i) << endl;
//        } catch (std::out_of_range const & e) {
//            cout << "Specific Exception cause : " << e.what() << endl;
//        }catch(std::exception const & e) {
//            cout << "Exception cause : " << e.what() << endl;
//        } catch (...) {
//            cout << "exception not caught by others" << endl;
//        }
//
//    }


    /**
     * POLYMORPHISM
     */
//    Student stu("Hari", "Sharma", "012345");
//    Person p;     // Abstract class instantiation not Possible
//    Person& per = stu;
//    printMatrikelNr(p);


//    Person* per2 = &stu;
//
//    unique_ptr<Person> uniquePtr = make_unique<Student>("unique", "student", "678909");
//
//    cout << stu.getFullName() << endl;
//    cout << per.getFullName() << endl;
//    cout << per2->getFullName() << endl;
//    cout << uniquePtr->getFullName() << endl;

   // printfullname(stu);


    /**
     * Unique Pointer
     */
//    unique_ptr<int> uniquePtr;
//    {
//        uniquePtr = make_unique<int>(5);
//    }
//    cout << uniquePtr << endl;
//    testIfAlive(uniquePtr);
//
//    unique_ptr<int> uniquePtr2 = move(uniquePtr);
//    cout << uniquePtr << endl;
//    cout << uniquePtr2 << endl;
//    testIfAlive(uniquePtr);
//    testIfAlive(uniquePtr2);
//
    /**
    * Shared Pointer
    */
//    shared_ptr<Messenger> sharedPtr2;
//
//    {
//        shared_ptr<Messenger> sharedPtr = make_shared<Messenger>();
//        sharedPtr2 = sharedPtr;
//    }



//    double* ptr ;
//// pointers convert to boolean false if they are null, and boolean true if they are non-null
//    if (ptr)
//        std::cout << "ptr is pointing to a double value.";
//    else
//        std::cout << "ptr is a null pointer." << endl;

//    int* p; // Create an uninitialized pointer (that points to garbage)
//    foo(p); // Trick compiler into thinking we're going to assign this a valid value
//
//    std::cout << *p << '\n'; // Indirection through the garbage pointer

//    int x = 5;
//    cout << typeid(&x).name() << endl;
//
//    vector<House> myStreet = {House(2), House(0), House(1)};
//
//    Packet packet1 ;
//
//    packet1.address =  &myStreet[0];
//
//    for (int i = 0; i < myStreet.size(); i++) {
//        (packet1.address + i)->ringBell();
//    }
  

//    int x = 0;
//    int & rx = x;
//    auto add_x = &x;
//    auto add_rx = &rx;
//    int * add_x2 = &x;
//    auto inhalt_x = *add_x2;
//
//    int* const ptrToX = &x;
//    *ptrToX = 5;

//    cout << x << endl;
//    cout << rx << endl;
//    cout << add_x << endl;
//    cout << add_rx << endl;
//    cout << inhalt_x << endl;
//    cout << add_x2 << endl;

//    cout << *(&x) << endl;
//    cout << ptrToX << endl;
//    cout << *ptrToX << endl;

//    // Call by value vs reference
//    int k = 0;
//    int& rk = k;            // reference of k : k and rk are two names of same object
//
//    int k2 = 1;
//    rk = k2;                // this will change the value of rk and also k !
//    increment(k);
//
//    int one = 1;
//    one = plusOne(one);
//
//    Person p1("Hari", "Prasad") ;
//    Person p1Copy(p1);
//    p1Copy.setFirstName("copy");
//    p1Copy.setLastName("p1");
//    Person p3;
//
//    Student s("raju", "yadav", "12345");
//    s.getMatrikel();
//
//    cout << p1.getFullName()<< endl;
//    cout << p1Copy.getFullName()<< endl;
//    cout << p3.getFullName()<< endl;
//    cout << p3.getFirstName()<< endl;
//    cout << p3.getLastName()<< endl;
//    cout << s.getFullName() << endl;
//
//    p1.setAge(-10);
//    cout << "age: "<<p1.getAge()<< endl;
//
//    Status status = Status::workInProgress;


    return 0;
}
