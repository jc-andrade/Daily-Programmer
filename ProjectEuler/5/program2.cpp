// Problem 5 in Project Euler
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
// STATUS: UNSOLVED

#include <iostream>
using namespace std;

int findIt(int x);

int main()
{
	int num=3;
	int found = findIt(num);
	cout << found << endl;
}

int findIt(int x)
{
	int z = x;
	if ( 	(z % 1 == 0) && (z % 2 == 0) && (z % 3 == 0) && (z % 4 == 0) &&
     		(z % 5 == 0) && (z % 6 == 0) && (z % 7 == 0) && (z % 8 == 0) &&
     		(z % 9 == 0) && (z % 10 == 0) )
	{ return z; }
	
	else {
		z++;
		findIt(z);
	}
    return z;
}
