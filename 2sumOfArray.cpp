// hackerrank
// problem #2
// Simple Array Sum

/*
Given an array of  integers, can you find the sum of its elements?

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers representing the array's elements.

Output Format

Print the sum of the array's elements as a single integer.
*/


// Solution

#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
    // Complete this function
    int sum = 0;
    for(int i =0; i <n; i++){
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = simpleArraySum(n, ar);
    cout << result << endl;
    return 0;
}