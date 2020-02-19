// mac937@nyu.edu
// HW6 Question 2

#include <iostream>

using namespace std;

void printShiftedTriangle(int numLines, int bottomMarginSize, char symbol) {
    int maxNumSymbols = numLines * 2 - 1;
    for (int i = 1; i <= numLines; i++) {
        int marginSize = bottomMarginSize + (numLines - i);
        for (int j = 0; j < marginSize; j++) {
            cout << ' ';
        }
        int numSymbols = maxNumSymbols - 2 * (numLines - i);
        for (int j = 0; j < numSymbols; j++) {
            cout << symbol;
        }
        cout << endl;
    }
}

void printPineTree(int numTriangles, char symbol) {
    for (int i = 1; i <= numTriangles; i++) {
        int bottomMarginSize = numTriangles - i;
        int numLines = i + 1;
        printShiftedTriangle(numLines, bottomMarginSize, symbol);
    }
}

int main() {
    int numTriangles;
    char symbol;
    cout << "Please enter the number of pine tree triangles and the symbol to draw them with:" << endl;
    cin >> numTriangles;
    cin >> symbol;
    printPineTree(numTriangles, symbol);
    return 0;
}
