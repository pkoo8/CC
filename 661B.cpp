//codeforces 661 div - 03 Candies Division
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a = n/k;
        int b = k/2;
        int c = n%k;
        if(c<b){
            cout << a*k+c <<"\n";
        }
        else{
            cout << a*k + b << "\n";
        }
    }
    return 0;
}