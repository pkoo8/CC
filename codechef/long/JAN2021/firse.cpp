#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<=b;i++)
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
        int n,m;
        cin >> n >> m;
        ll a[n];
        ll b[m];
        ll summ,sumn;
        summ=0;
        sumn=0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            sumn=(sumn%M)+(a[i]%M);
        }
        for(int j=1;j<=m;j++){
            cin >> b[j];
            summ = (summ%M) + (b[j]%M);
        }
        if(n*a[1]>m*b[1]){
            cout << 0;
        }
        else if((summ+sumn)-(2*n*b[1])>0){
            cout << -1;
        }
        else{
            cout<<((summ-sumn)/(2*(b[1]-a[1])))+1;
        }
        cout << "\n";
        
    }
    return 0;
}
