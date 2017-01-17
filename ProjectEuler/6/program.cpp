// Project Euler - Problem 6
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum
// STATUS: SOLVED -- 25164150

#include <iostream>
using namespace std;


int main()
{
    int sumSquares=0;
    int squareSum=0;
    for (int i=0; i <= 100; i++)
    {
        int oldI = i; // Preserve location in loop
        squareSum += i;
        i = i*i;
        sumSquares += i;
        i = oldI; // go back to location
    }
   
    // compute
    squareSum = squareSum * squareSum;
    int difference = squareSum - sumSquares;
    cout << difference << endl;
    return 0;
}
