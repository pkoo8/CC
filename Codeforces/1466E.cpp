#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const unsigned int M = 1000000007;
using namespace std;
int main(){
    //fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(int i=1;i<=n;i++){
            cin >> a[i];
            cout << a[i] << " ";
        }
        long long ans=0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    ans = ans + (a[i]&a[j])*(a[j]|a[k]);

                }
            }
        }
        cout << "\n";
    }
    return 0;
}
