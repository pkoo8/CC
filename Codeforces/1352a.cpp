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
        string s;
        cin >> s;
        int n=s.length();
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                count++;
            }
        }
        cout << count << "\n";
        for(int i = 0; i < n; i++){
            if(s[i] == '0') continue;
            cout <<s[i];
            for(int k = 0; k < n -i - 1; k++)
                cout <<0;
            cout <<" ";
        }
        cout <<"\n";


    }
    return 0;
}
