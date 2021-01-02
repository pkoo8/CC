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
        set<int>s;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(s.find(a[i])==s.end()){
                s.insert(a[i]);
            }
            else{
                a[i]=a[i]+1;
                s.insert(a[i]);
            }
            
        }
        
        cout << s.size();
        
        cout << "\n";
    }
    return 0;
}
