// mac937@nyu.edu
// CS Bridge Winter 2020
// HW6 Question 4

#include <iostream>
#include <cmath>

using namespace std;

// Prints the divisors of num in ascending order
void printDivisors(int num) {
    double numSqrt = sqrt(num);
    int headStop = static_cast<int>(floor(numSqrt));
    for (int i = 1; i <= headStop; i++) {
        if (num % i == 0) {
            cout << i << ' ';
        }
    }
    int tailStart = static_cast<int>(ceil(numSqrt)) - 1;
    for (int i = tailStart; i >= 1; i--) {
        if (num % i == 0) {
            cout << (num / i) << ' ';
        }
    }
    cout << endl;
}

int main() {
    int userInput;
    cout << "Please enter a positive integer >= 2: ";
    cin >> userInput;
    printDivisors(userInput);
    return 0;
}
