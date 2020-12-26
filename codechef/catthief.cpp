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
        long long n,k,x,y,d;
        cin >> x >> y >> k >> n;
    
    if(x>y) d = x-y;
    else d= y-x;
    if(d%(2*k)==0) cout << "Yes\n";
    else cout << "No\n";

    }
    return 0;
}
