// Conditional Statements
// problem 5

/*
	Given a positive integer denoting , do the following:

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

A single integer denoting .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); 
otherwise, print Greater than 9 instead.

*/

// Solution

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    // your code goes here
    string answers[10]={"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n>9)
        cout<<answers[0];
    else
        cout<<answers[n];
    return 0;
}



// Alternate Solution with no if statements
// only problem: goes against spirit of the problem
/*
int n;
const char *words[] = {"one","two","three","four","five","six","seven","eight","nine"};
cin >> n;
cout << ((n<= 9) ? words[n-1] : "Greater than 9") << endl;
*/