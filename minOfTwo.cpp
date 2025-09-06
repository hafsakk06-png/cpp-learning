#include <iostream>
using namespace std;

// sum of 2 numbers
int sum(int a, int b) {
    int s = a+b;
    return s;
}

// min of 2 numbers
int minOfTwo(int a, int b) { // parameters
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << "Sum = " << sum(10, 5) << endl; // arguments
    cout <<"min =" << minOfTwo(10, 5) << endl; // arguments 

    return 0;
}