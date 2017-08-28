// birthday candle problem
// 10

/*
Colleen is turning  years old! Therefore, she has  candles of various heights on her cake, and candle  has height . 
Because the taller candles tower over the shorter ones, Colleen can only blow out the tallest candles.

Given the  for each individual candle, find and print the number of candles she can successfully blow out.

Input Format

The first line contains a single integer, , denoting the number of candles on the cake. 
The second line contains  space-separated integers, where each integer  describes the height of candle .

Constraints

Output Format

Print the number of candles Colleen blows out on a new line.

Sample Input 0

4
3 2 1 3
Sample Output 0

2
	
*/


// My solution

#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar);

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

int birthdayCakeCandles(int n, vector <int> ar) {
    int tallest = 0;
    int candles = 0;
    for(int i = 0; i<n; i++){
        if(ar[i] > tallest)
            tallest = ar[i];
    }
    for(int i = 0; i<n; i++){
        if(ar[i]==tallest)
            candles++;
    }
    return candles;
}

// A top solution

/*

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N; cin>>N;
    int a[N];
    for(int i=0;i<N;i++) cin>>a[i];
    int biggest = 0;
    for(int i=0;i<N;i++) biggest = max(biggest, a[i]);
    int count = 0;
    for(int i=0;i<N;i++) if (a[i] == biggest) count++;
        cout<<count<<endl;
    return 0;
}


*/