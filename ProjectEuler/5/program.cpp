// Problem 5 in Project Euler
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
// STATUS: SOLVED
// THIS CODE IS NOT MINE, STOLEN FROM STACKOVERFLOW. Need to understand and re-write myself.
#include <iostream>
using namespace std;

long gcd(long a, long b) {
    while (b) {
        int prevB = b;
        b = a%b;
        a = prevB;
    }
    return a;
}

long lcm(long a, long b) { return a * (b / gcd(a,b)); }

int main () {
    long result = 10;
    for (long number = result - 1; number > 1; --number) {
        result = lcm(result,number);
    }
    cout << result << endl;
}

