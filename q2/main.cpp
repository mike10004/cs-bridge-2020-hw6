// mac937@nyu.edu
// CS Bridge Winter 2020
// HW6 Question 2

#include <iostream>

using namespace std;

// Prints a triangle of height numLines, filled with symbol characters, 
// shifted bottomMarginSize spaces from the left margin.
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

// Prints a sequence of n triangles of increasing sizes populated with the 
// given symbol, forming the shape of a pine tree.
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
