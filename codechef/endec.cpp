#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        long long r,c;
        cin >> r >> c;
        long long p = 1000000007;
        long long res =1;
        res = res * (r%p);
        res = res * (c%p);
        res = res %p;
        cout << res << "\n";
    }
    return 0;
}
