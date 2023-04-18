//Question2

#include <iostream>
#include <cmath>
using namespace std;

double calculateFactorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * calculateFactorial(num - 1);
}

double calculateExponential(int x) {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (x == 0) {
        return 1;
    }
    return (pow(n, x) / calculateFactorial(x)) + calculateExponential(x - 1);
}

double solveEquation() {
    return calculateExponential(5);
}

int main() {
    double result = solveEquation();
    cout << "The result is: " << result << endl;
    return 0;
}
