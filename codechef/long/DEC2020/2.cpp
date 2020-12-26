#include<bits/stdc++.h>
using namespace std;
const long long p = 1000000007;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        unsigned long long x,y;
        cin >> x >> y;
        unsigned long long ans = x*y;
        if(x%2) cout << (ans+1)/2 << "\n";
        else cout << ans/2 << "\n";
    }
    return 0;
}