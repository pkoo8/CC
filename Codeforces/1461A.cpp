#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string s;
        cin >> n >> k;
        for(int i=0;i<n;i++){
            s+=char('a'+ i%3);
        }
        cout<< s << "\n";

    }
    return 0;
}
