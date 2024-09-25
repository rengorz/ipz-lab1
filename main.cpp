#include <iostream>
using namespace std;


void generateFibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    
    cout << "Fibonacci Series: " << a << ", " << b;

    
    for (int i = 1; i <= n - 2; ++i) {
        nextTerm = a + b;
        cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;

    if (n < 2) {
        cout << "Please enter a number greater than or equal to 2." << endl;
    }
    else {
        generateFibonacci(n);
    }

    return 0;
}
