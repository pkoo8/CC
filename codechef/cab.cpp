#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const unsigned int M = 1000000007;
using namespace std;
bool isPowerOfTwo (int x)
{
  return x && (!(x&(x-1)));
}
char waystoDivide(int k,int n){
    if(k==1){
        return 'a';
    }
    if(k%2){
        return waystoDivide(1,n)+waystoDivide(k-1,n-1);
    }
}
int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        if(k%2==1){
            k=k-1;
            n=n-1;
            cout << 'a';
        }

    }
    return 0;
}
