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
    int count =0;
    int x=0;
    for(int i=1;i<=t;i++){
        cin >> a[i];
        if(a[i]!=i){
            count ++;
            x=a[i];
        }
    }
    for(int i=x;i<x+count;i++){
        if(a[i]-1!=a[i+1]){
            x=0;
            count = 0;
        }
    }
    

    //while(t--){}
    cout << x << " " <<  x+ count << "\n";
    return 0;
}
