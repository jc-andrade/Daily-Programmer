#include <iostream>

using namespace std;
int fib(int x);

int main() {
    int y = fib(5);
    cout << y << endl;
}
// This is just fibonacci series, now we just have to find the evens and sum them up.
int fib(int x) {
    if (x == 0) { return 0; }
    if (x == 1) { return 1; }
    else
    { return fib(x-1)+fib(x-2); }
}
