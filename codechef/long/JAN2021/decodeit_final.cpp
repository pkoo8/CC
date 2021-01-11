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
        string s;
        cin >> s;
        for(int i=3;i<n;i=i+4){
            int num=0;
            int base=1;
            for(int j=i;j>=i-3;j--){
                
                if(s[j]=='1'){
                    num = num + base;
                }
                base = base * 2;

            }
            num = num + 97;

            cout << (char)num;

        }
        cout << "\n";
    }
    return 0;
}
