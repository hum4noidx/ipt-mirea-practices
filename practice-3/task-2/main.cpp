#include "rational.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;

    Rational* fractions = new Rational[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter numerator and denominator of fraction " << i+1 << ": ";
        cin >> a >> b;

        Rational f(a, b);
        fractions[i] = f;

        cout << "Fraction " << i+1 << " = ";
        fractions[i].show();
        cout << endl;
    }

    delete[] fractions;
    return 0;
}
