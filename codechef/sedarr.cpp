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
        int n,k;
        cin >> n >> k;
        int a[n];
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum = sum + a[i];
        }
        if(sum%k){
            cout << 1 ;
        }
        else{
            cout << 0 ;
        }
        cout << "\n";
    }
    return 0;
}
