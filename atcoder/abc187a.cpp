#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<=b;i++)
const unsigned int M = 1000000007;
using namespace std;
int sum (int n){
    int sum = 0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a,b;
    cin >> a >> b;
    int c = sum(a);
    int d = sum(b);
    cout << max(c,d);

    return 0;
}
