#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    double d = 2.34;
    auto f = static_cast<float>(d);

    cout << "give a number ";
    cin >> d;

    cout <<"value of d : "<< d << endl;
    cout << "bye bye";

    return 0;
}
