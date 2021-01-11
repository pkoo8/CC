#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<=b;i++)
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
        ll n,x;
        cin >> n >> x;
        ll a[n];
        ll sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];sum+=a[i]%M;

        } 
        for (int i = 0; i < n; i++)
        {
            if(sum%k){

            }
        }
        
    }
    return 0;
}
