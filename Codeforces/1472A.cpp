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
        ll w,h,n;
        cin >> w >> h >> n;
        ll z=1;
        if(w%2==1&&h%2==1){
            z=1;
        }
        else if((w%2==0)||(h%2==0)){
            ll p=((w%M)*(h%M))%M;
            while(p%2!=1){
                p=p/2;
                z=z*2;
            }
        }
        //else if(w%2==0||h%2==0)//
        if(z>=n){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }
    }
    return 0;
}
