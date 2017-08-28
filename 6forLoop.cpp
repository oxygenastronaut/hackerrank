// for loop
// problem 6
/*
	Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the interval  :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
	
*/


// my solution

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin>>a;
    cin>>b;
    string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int n = a; n<=b; n++){
        if(n < 10)
            cout<<numbers[n-1]<<endl;
        else
            if(n%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
    }
    return 0;
}


