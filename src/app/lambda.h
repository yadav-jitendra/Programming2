//
// Created by jitendra on 09.06.21.
//

#ifndef STARTINGC___LAMBDA_H
#define STARTINGC___LAMBDA_H

class Functor{
public:
    int x;
    int operator() (int val) { return x + val ; }
};


auto lambda = []() {};

auto lambda2 = lambda;  // beide verweisen auf die gleiche Funktion


template<class T>
void callMyLambda(T lam) {
    lambda();
}

//callMyLambda(lambda2);  // call somewhere


auto returnLambda() {
    return [](int val) -> bool { return val % 2 == 0; };
}

auto myFoo() -> bool { return true; } // nicht empfohlen

auto lambda3 = returnLambda();


/*Lambda Captures*/
auto createLambda(int val){
    return [val](int x) { return val + x; };
}







#endif //STARTINGC___LAMBDA_H
