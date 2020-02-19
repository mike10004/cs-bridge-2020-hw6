// mac937@nyu.edu
// CS Bridge Winter 2020
// HW6 Question 1

#include <iostream>
#include <cassert>

using namespace std;

int fib(int n) {
    assert(n > 0);
    assert(n <= 46);  // die on int overflow
    if (n == 1 || n == 2) {
        return 1;
    }
    int fNMinus1 = 1, fNMinus2 = 1;
    int fN = 0;
    for (int i = 3; i <= n; i++) {
        fN = fNMinus1 + fNMinus2;
        fNMinus2 = fNMinus1;
        fNMinus1 = fN;
    }
    return fN;
}

int main() {
    int userInput;
    cout << "Please enter a positive integer: ";
    cin >> userInput;
    
    cout << fib(userInput) << endl;    
    return 0;
}
