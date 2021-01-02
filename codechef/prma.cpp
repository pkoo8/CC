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
    long long a[t];
    for(int i=0;i<t;i++){
        cin >> a[i];
    }
    int x,y;
    int countf =0,countb=0;
    for(int i=0;i<t;i++){
        if(a[i]+1 == a[i+1]) continue;
        else{
            x=a[i+1];
            countf = i+1;
            if(a[i+1]-1==a[i+2]) continue;
            else{
                y=a[i];
                countb++;
            }
        }
    }
    if(countb==countf){
        cout << min(x,y) << " " << max(x,y) << "\n";
    }
    else{
        cout << 0 << " " << 0 << "\n";
    }
    //while(t--){}
    return 0;
}
