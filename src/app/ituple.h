//
// Created by jitendra on 11.06.21.
//

#ifndef STARTINGC___ITUPLE_H
#define STARTINGC___ITUPLE_H

#include <tuple>
using std::tuple;
using std::make_tuple;
using std::get;


//    tuple<int, int> tuple1 = make_tuple(2,4);
//    auto tuple2 = make_tuple(1, "hello", 3.14);
//
//    cout << get<0>(tuple1) << ", " << get<1>(tuple1) << endl;

    tuple<int,int> tuple_minmax(int first, int second){
        return (first <= second)? std::tie(first,second) : std::tie(second,first);

//        tuple<int, int> mytuple;      //this is eqv to one line code above
//        if (first <= second){
//            get<0>(mytuple) = first;
//            get<1>(mytuple) = second;
//        } else {
//            get<0>(mytuple) = second;
//            get<1>(mytuple) = first;
//        }
//        return mytuple;

    }

#endif //STARTINGC___ITUPLE_H
