#include <iostream>
#include "rational.h"

using namespace std;

int main() {
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;

    // Dynamically allocate array of Rational objects
    Rational* fractions = new Rational[n];

    // Input values for each fraction and display them
    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter values for fraction " << i + 1 << " (numerator denominator): ";
        cin >> a >> b;
        fractions[i].set(a, b);
        cout << "Fraction " << i + 1 << ": ";
        fractions[i].show();
        cout << endl;
    }

    // Perform arithmetic and comparison operations on fractions
    Rational sum;
    for (int i = 0; i < n; i++) {
        sum = sum + fractions[i];
    }
    cout << "Sum of fractions: ";
    sum.show();
    cout << endl;

    Rational difference = fractions[0] - fractions[1];
    cout << "Difference between fraction 1 and fraction 2: ";
    difference.show();
    cout << endl;

    ++fractions[0];
    cout << "Incremented numerator of fraction 1: ";
    fractions[0].show();
    cout << endl;

    bool isEqual = fractions[0] == fractions[1];
    cout << "Fraction 1 is equal to fraction 2: ";
    cout << (isEqual ? "true" : "false") << endl;

    bool isGreater = fractions[0] > fractions[1];
    cout << "Fraction 1 is greater than fraction 2: ";
    cout << (isGreater ? "true" : "false") << endl;

    fractions[1] = fractions[0];
    cout << "Fraction 2 after assignment from fraction 1: ";
    fractions[1].show();
    cout << endl;

    // Free dynamically allocated memory
    delete[] fractions;
    fractions = nullptr;

    return 0;
}
