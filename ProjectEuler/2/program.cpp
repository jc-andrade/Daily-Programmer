// Find sum of all Fibonacci even numbers
// STATUS: SOLVED

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    // Initialize variables
    int a = 1,
        b = 1,
        c = 1,
        sum = 0;

    while (c < 4000000) {
    c = a + b;
        if ( (c%2) == 0 ) // If even
            sum += c; // add to sum

    a = b; // This is where the fibonacci series
    b = c; // basically happens
    }
    cout << sum;
    return 0;
}
