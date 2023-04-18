//Question1

#include <iostream>
#include <cmath>
using namespace std;

double calculateFac(int num) {
    if (num == 0) {
        return 1;
    }
    return num * calculateFac(num - 1);
}

double calculateExponential(int n, int x) {
    if (x == 0) {
        return 1;
    }
    return (pow(n, x) / calculateFac(x)) + calculateExponential(n, x - 1);
}

double solveEquation(int n) {
    return calculateExponential(n, 10);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    double result = solveEquation(n);
    cout << "The result is: " << result << endl;
    return 0;
}









