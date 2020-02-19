// mac937@nyu.edu
// CS Bridge Winter 2020
// HW6 Question 3

#include <iostream>

using namespace std;

// Approximates e to (n+1) terms in the infinite series 1 + 1/1! + 1/2! + 1/3! + ...
double eApprox(int n) {
    double nFactorial = 1;
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        double addend = 1 / nFactorial;
        sum += addend;
        nFactorial *= (i + 1);
    }
    return sum;
}

int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0;
}