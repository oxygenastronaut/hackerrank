// functions

/*
You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
a += b is equivalent to a = a + b;
Input Format

Input will contain four integers -  , one in each line.

Output Format

Print the greatest of the four integers. 
PS: I/O will be automatically handled.
*/

// My Solution

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
	int greatest = 0;
	if(a>greatest)
		greatest = a;
	if(b>greatest)
		greatest = b;
	if(c> greatest)
		greatest = c;
	if(d > greatest)
		greatest = d;
	return greatest;
}


// Alternate function definition
/*
	int max_of_four(int a, int b, int c, int d){
	return max(a, max(b, max(c, d)));
}


*/