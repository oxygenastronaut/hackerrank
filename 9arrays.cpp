// arrays
// number 9

/*

The first line of the input contains ,where  is the number of integers.The next line contains  integers separated by a space.

Constraints


, where  is the  integer in the array.

Output Format

Print the  integers of the array in the reverse order in a single line separated by a space.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1

*/

// my solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >>n;
    int arr[n];
    for(int i =0; i<n; i++)
        cin>>arr[i];
    for(int j = n-1; j>=0; j--)
        cout<<arr[j]<<" ";
    return 0;
}
