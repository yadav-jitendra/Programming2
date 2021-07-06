#include <cmath>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>

#include <memory>
#include <exception>

#include <typeinfo>
#include "Messenger.h"

#include <tuple>
using std::tuple;
using std::make_tuple;
using std::get;

#include <utility>
using std::pair;
using std::make_pair;

#include <array>
using std::array;
#include <list>
#include <set>

#include "ituple.h"

#include "functions.h"
#include "Person.h"
#include "Student.h"
#include "House.h"
#include "lambda.h"
#include <iomanip>
#include <cmath>

#include <map>
#include "helper.h"
#include <unordered_set>
#include <unordered_map>
#include "stackDemo.h"
#include "QueueDemo.h"
#include "priorityqueueDemo.h"
#include "algorithmDemo.h"
#include "precisedemo.h"
#include "moveSemantik.h"
#include "threadDemo.h"
#include "producerConsumer.h"
#include "shadedDaata.h"

///BadHash Functor
//class BadHash{
//public:
//    int operator()(int) const { return 1; };
//};


/**
 * MAIN METHODE
 */
int main() {
    using namespace std;

    //producerConsumer();
    sharedDataDemo();

   // mythread();

    //moveSemantik();
//    precise();

    ///algorithm
//    algoDemo();
//    counting();
//    eraseRemove();
//    iteratorExample();


    /// stack
//    stackDemo();

    /// queue
//    queueDemo();

    /// priority_queue
//    priorityQueueDemo();

    /// unordered_set
//  unordered_set<int> uset; // without BadHash : default hash function
//  unordered_set<int, BadHash> uset; // using Fuctor
//    auto badHash = [](int){ return 1;};
//    unordered_set<int, decltype(badHash)> uset(0, badHash); // using lambdas
//    for (int i = 0; i <10 ; ++i) {
//        uset.insert(i);
//    }
//    for (auto i : uset){
//        cout << i << ", ";
//    }


    /**map*/ // <map> : sorted nach key werte ///tree
//    map<string, int> map = {{"ram", 124} ,{"hari", 567}};
//
//    map["hari"] = 789;  //change value
//
//    map["sham"] = 777;  //add new kV
//
//    for (auto & [key, value] : map) {   /// Elegant way !!
//        cout << key << ": " << value<< endl;
//    }


    /**set*/ // <set> ///tree
//    set<int> myset = {3,4,1}; //sorted elements, no duplicate
//    myset.insert(-1);
//    myset.insert(0);
//    myset.insert(0);
//    for (auto & i : myset) {
//        cout << i << endl;
//    }

//    // Person class must have operator< implemented to use set
//    set<Person> persons = {Person("jitendra","yadav" ), Person("jitendra", "kumar")};
//    for (auto i : persons){
//        cout << i.getFullName() << endl;
//    }
//    //Student class uses operator< of base class : Person
//    set<Student> students = {Student("jitendra","yadav" , "1234"), Student("jitendra", "kumar", "2345")};
//    for (auto i : students){
//        cout << i.getFullName() << endl;
//    }


    /**list*/ // <list>
//    list<int> list1 = {1,2,3};
//    list1.push_back(4);
//    list1.push_front(-2);
//    for (auto i : list1){
//        cout << i << endl;
//    }


    /**array*/ //<array> is not resizable("statische große"), initial size should b defined
//    array<int,4> myarray= {1,2,3,4}; // initial size should not be too big as array is stored in stack
//    for (auto a : myarray){
//        cout << a << endl;
//    }


    /**vector*/
//    vector<int> vector1 = {1,2,3};
//    int cap = vector1.capacity();

//    vector1.push_back(7);
//    int cap2 = vector1.capacity();

//    vector1.shrink_to_fit();
//    int cap3 = vector1.capacity();
//
//    for (auto const & i : vector1){ // const & : ensures no change of element allowed
//        // i = 5;
//        cout << i << endl;
//    }

    /**pair*/  //<utility>
//    auto mypair = make_pair(12, "abcd"); // only two parameters
//    cout << mypair.first << ", " << mypair.second << endl;


    /**tuple*/  //<tuple>
//    auto tuple2 = make_tuple(1, "hello", 3.14);
//    cout << get<0>(tuple2) << ", " << get<1>(tuple2) <<", " << get<2>(tuple2) << endl;
//    tuple<int, int> tuple1 = make_tuple(2,4);
//    cout << get<0>(tuple1) << ", " << get<1>(tuple1) << endl; // how to retrieve value from tuple
//
//    int a =70;
//    int b =60;
//    auto [minval, maxval] = tuple_minmax(a,b); // this
//
//    int min;
//    int max;
//    std::tie(min,max) = tuple_minmax(a,b); //and this both are equivalent if int min and max already defined
//    cout << minval << ", " << maxval << endl;
//    cout << min << ", " << max << endl;


    /**Lambdas*/
//    auto isEven = [](int toCheck){ return toCheck % 2 == 0; };
//
//    vector<int> nums = {0,1,2,3,4,5,6,-1,-2};
//
//    // traditional way
//    int evens = 0;
//    for (int i = 0; i < nums.size() ; ++i){
//        if(isEven(nums[i])){
//            ++evens;
//        }
//    }
//    cout << "noOfevens: " << evens << endl;
//
//    // using count_if
//    cout << "noOfevens: " << count_if(begin(nums), end(nums), isEven)<< endl;
//    cout << "noOfodds: " << count_if(begin(nums), end(nums), [](int v){return v % 2 != 0;})<< endl;
//
//    bool is4Even = isEven(4);
//    cout << is4Even << endl;


/** functor */
//auto lamb = [](int val){ return val;};
//Functor func ;     // both are equivalent (defined in lambda.h)
//func.x = 10;
//
//cout << lamb(7) << endl;
//cout << func(7) << endl;


/**Lambda Captures*/
//auto add3 = createLambda(3);
//auto add5 = createLambda(5);
//cout << "add 3 + 10 = " << add3(10) << endl;
//cout << "add 3 + 20 = " << add3(20) << endl;
//cout << "add 5 + 10 = " <<  add5(10) << endl;

//    int x = 1;
//    int y = 2;
//    int z = 3;
//
//    auto increment = [&, a=x+10]() mutable {
//        x = a;
//        ++y;
//        ++z;
//    };
//
//    increment();



/**Template*/
//    cout << mymin(1.5, 2) << endl;
//    cout << mymin(string("hello "), string("world")) << endl;
//
//    Person p1("Hari", "Prased");
//    Person p2("Ram", "Kumar");
//    cout << "Hari id: " << p1.getID() << endl;
//    cout << "Ram id: " <<p2.getID() << endl;
//    cout << "hari ID is smaller than ram : " << ((p1 < p2)? "true" : "false") << endl;
//    cout << "hari ID is smaller than 4 : " << ((p1 < 4)? "true" : "false") << endl;
//    cout << "4 is smaller than hari ID : " << ((4 < p1)? "true" : "false") << endl;
//
//    Accumulator<Person> acc3(Person("Ram", "kumar"));
//    acc3.add(Person("Hari", "Prasad"));
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

    /**Exception  */
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


    /**POLYMORPHISM*/
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
