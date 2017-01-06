// Problem 4 - Largest palindrome product
// Find the largest palindrome made from the product of two 3-digit numbers

#include <iostream> // For input and output
using namespace std;

int main () {
    int n,
        num,
        digit,
        rev = 0;
        
    for (int i = 100; i < 1000; i++)
    {
        for (int j=100; j < 1000; j++)
        {
            n = i*j;
            num = n;
            do {
                digit = num % 10; // set digit to LAST NUMBER OF NUM
                rev = (rev * 10) + digit; // multiplies by 10 and adds the next digit to start reversing it 
                num = num / 10; // Take away the last digit
            } while (num !=0);
            if (n == rev)
                cout << n << endl;

            else if (n != rev)
                rev = 0;
        }
    }
    return 0;
}
