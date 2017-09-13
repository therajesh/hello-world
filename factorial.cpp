//Factorial Calculator
// Given Integer x, calculate it's factorial.
#include <iostream>
using namespace std;
int factorial(int x) {
    if (x==1) return 1;
    int result = x * factorial(x-1);
    return result;
}

int main () {
    int val;
    cout << "Please enter an integer value: ";
    cin >> val;
    cout << factorial(val) <<endl;
    return 0;
}