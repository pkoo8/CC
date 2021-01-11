#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const unsigned int M = 1000000007;
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
        int n;
        long long k,d;
        cin >> n >> k >> d;
        int a[n];
        long long total=0,count=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            total += a[i]%M;
        }
        if(total/k < d){
            cout << total/k ;
        }
        else{
            cout << d;
        }
        cout << "\n";
    }
    return 0;
}
