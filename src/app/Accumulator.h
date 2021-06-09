#ifndef STARTINGC___ACCUMULATOR_H
#define STARTINGC___ACCUMULATOR_H

template <class T>
class Accumulator{
private:
    T value;

public:
    Accumulator(T v)
    : value(v){}

    void add(T v){
        value += v;
    }

    T getValue() const {
        return value;
    }

};

template <>
class Accumulator<std::string>{
private:
    int value;

public:
    Accumulator(int v)
            : value(v){}

    void add(std::string v){
        value += v.length();
    }

    int getValue() const {
        return value;
    }

};
#endif //STARTINGC___ACCUMULATOR_H
