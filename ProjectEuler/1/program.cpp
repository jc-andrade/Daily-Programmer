// Project Euler problem 1
// STATUS: SOLVED

#include <iostream>

using namespace std;

// Find the sum of all the multiples of 3 or 5 below 1000

int main() {
    int sum=0; // Kep track of sum
    for(int i=0; i<1000; i++){ // For all numbers up to 1000
        if ((i%3 == 0) || (i%5 == 0)) { // If they're multiples of 3 or 5
            sum = sum+i; // Add them to the current running sum.
        }
    }
    cout << "Sum is: " << sum << ".\n";

}
