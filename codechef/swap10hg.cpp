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
        string s,p;
        cin >> s >> p;
        int x,y;
        x=y=0;
        bool ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                x++;
            }
            if(p[i]=='0'){
                y++;
            }
        }
        if(x==y){
            ans =1;
        }



        if(ans){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
    return 0;
}
/* case 1
 when # 0's != # 0's no
 if 0's equal then 1's equal 
 now verify if in same position both o's and 1's */