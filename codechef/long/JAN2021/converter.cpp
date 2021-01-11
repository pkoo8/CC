/*
    Author : pkoo8 
    Date   : 2nd Jan 2021
    A Template for various converters required in competetive programming .
    1. Binary to Decimal
    2. Decimal to Binary
*/
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const unsigned int M = 1000000007;
using namespace std;
int BtD(int n){
    int base =1;
    int dec=0;
    //int n =n;
    while(n!=0){

        dec=dec+((n%10)*base);
        n=n/10;
        base = base *2;

    }
    return dec;


}

int main(){
    fastio

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    cout << BtD(t) << "\n";
    // while(t--){}
    return 0;
}
