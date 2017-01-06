// Problem 4 - Largest palindrome product
// Find the largest palindrome made from the product of two 3-digit numbers

#include <iostream> // For input and output
using namespace std;

int main () {
    int n,
        num,
        digit,
        rev = 0;

    cout << "Enter a pos number: ";
    cin >> num;
    n = num; // assign number to n

    do {
    digit = num % 10; // set digit to LAST NUMBER OF NUM
    rev = (rev * 10) + digit; // multiplies by 10 and adds the next digit to start reversing it 
    num = num / 10; // Take away the last digit
    } while (num !=0);

    cout << "The reverse of the number is: " << rev << endl;

    if (n == rev)
        cout << " Number is a palindrome";
    else
        cout << "Number is not a palindrome";
    return 0;
}
