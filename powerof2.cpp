#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void isPowerOfTwo(int n) {
    if( n > 0 && (n & (n - 1)) == 0)
        cout<<"Yes it is a power of 2";
    else 
        cout<<"No it is not a power of 2";

}
int main(){
    int a;
    cin >> a;
    isPowerOfTwo(a); // Example input
}