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
        int n;
        cin >> n;
        int total_working_days = 120;
        int x = 0;
        int y=0;
        string s;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                x++;
            }
        }
        
        if(x>30){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
    return 0;
}
