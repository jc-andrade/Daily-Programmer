// Problem 3, Largest Prime Factor.
// Find the largest prime factor of the number 600 851 475 143
// STATUS: UNSOLVED
// Gotta practice`

#include <cmath>
#include <iostream>

int largestPrime(double theNum);

int main() {
  //  double number = 600851475143;
    double number = 25;
    int largest = largestPrime(number);
    std::cout << largest << std::endl;
}

int largestPrime(double theNum) 
{
    int FactorCount = 0;
    int sqrtNum = sqrt(theNum);
    for (int i=theNum; i<=2; --i)
    {
        for(int j=2; j < sqrtNum + 1; ++j)
        {
            if (i%j == 0)
            {
                ++FactorCount;
            }
        }
        if (FactorCount == 0) { return i; break; }
    }   
return FactorCount;
}
