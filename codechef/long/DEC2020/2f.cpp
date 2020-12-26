#include<bits/stdc++.h>
using namespace std;
const long long p = 1000000007;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long x,y;
        cin >> x >> y;
        x=x%p;
        y=y%p;
        long long s = ((x%p)*(y%p))%p;
        long long ans;
        if(s%2==0){
            ans = ((ans%p)/2)%p;
        }
        else{
            ans = (((ans+1)%p)/2)%p;
        }
        cout << ans << "\n";
    }
    return 0;
}