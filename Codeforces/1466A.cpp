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
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        set<int>s1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i!=j){
                    if(a[j]>a[i]){
                        s1.insert(a[j]-a[i]);
                    }
                }
    
            }
        }
        cout << s1.size() << "\n";
    }
    return 0;
}
