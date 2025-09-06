#include <iostream>
using namespace std;

void changeX(int X) {
    X = 55*X;
    cout <<"X =" << X << endl;
}

int main() {
    int x = 5;
    changeX(x);

    cout <<"x =" << x << endl;
    return 0;
}