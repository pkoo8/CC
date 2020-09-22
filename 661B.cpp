//codeforces 661 div - 03 Candies Division
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if((k/2) < (n%k)){
            cout << (n/k)*k+(k/2) <<"\n";
        }
        else{
            cout << (n/k)*k+(n%k) << "\n";
        }
    }
    return 0;
}