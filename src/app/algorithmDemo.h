//
// Created by jitendra on 15.06.21.
//

#ifndef STARTINGC___ALGORITHMDEMO_H
#define STARTINGC___ALGORITHMDEMO_H

#include <list>
#include <iostream>
#include <vector>
#include <numeric>


void algoDemo() {
    using namespace std;

    list<int> v(5);
    iota(begin(v), end(v), 10); //  fill 10 to 14

    auto output = [](int item) { cout << item << ", "; }; // lambda to print item

    for_each(begin(v), end(v), output); // can access items of any container
    cout << endl;




    vector<int> v2;
    generate_n(back_inserter(v2), 5 , [i=0]() mutable { ++i; return i*i; }); // insert squares to end

    for_each(begin(v2), end(v2), output ); // prints from beginning
    cout << endl;

    for_each(rbegin(v2), rend(v2), output ); // prints from back : in reverse order
    cout << endl;

};

void counting(){
    using namespace std;
    vector<int> nums = {1,3,2,3,4,3,5,3};

    int occurrence = count(begin(nums), end(nums), 3); // counts the occurrence of 3

    cout << occurrence << endl;
}

void eraseRemove(){
    using namespace std;

    auto output = [](int item) { cout << item << ", "; }; // lambda to print item

    vector<int> n = {1, 3, 2,4,5, 1, 1, 1, 1, 1, 1, 1};
    n.erase(remove_if(begin(n), end(n), [](auto item){ return item == 1; }), end(n));
    for_each(begin(n), end(n), output ); // prints from back : in reverse order
    cout << endl;
}

void iteratorExample(){
    using namespace std;

    auto output = [](int item) { cout << item << ", "; };

    vector<int> v = {1,2,3,4,4,3};
    for_each(begin(v), end(v), output );
    cout << endl;


    auto v2 = v;
    fill(begin(v2), end(v2), 4);  // fill all items with 4
    for_each(begin(v2), end(v2), output );
    cout << endl;


    auto v3 = v;
    fill(begin(v3), end(v3) - 1, 4); // fill all item with 4 except last one
    for_each(begin(v3), end(v3), output );
    cout << endl;

    auto v4 = v;
    fill_n(begin(v4), 2, 0);            // fill 2 zeros from beginning
    fill_n(back_inserter(v4), 3, 0);    // fill 3 zeros at the end
    for_each(begin(v4), end(v4), output );
    cout << endl;

    auto first3 = find(begin(v), end(v), 3);    // find first position of 3
    auto dist = distance(begin(v), first3);
    cout << dist << endl;

    auto next3 = find(begin(v) + dist +1, end(v), 3);   // find next position of 3
    auto dist2 = distance(begin(v), next3);
    cout << dist2 << endl;
}





#endif //STARTINGC___ALGORITHMDEMO_H
