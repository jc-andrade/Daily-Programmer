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
	int y = x;
	if ( 	(y % 1 == 0) && (y % 2 == 0) && (y % 3 == 0) && (y % 4 == 0) &&
     		(y % 5 == 0) && (y % 6 == 0) && (y % 7 == 0) && (y % 8 == 0) &&
     		(y % 9 == 0) && (y % 10 == 0) )
	{ return y; }
	
	else {
		y++;
		findIt(y);
	}
return y;
}
