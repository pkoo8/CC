#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<=b;i++)
const long long M = 1000000007;
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
        //cout <<  sumn  << " "<< summ << "\n";
                
        sort(a+1,a+n+1);
        sort(b+1,b+n+1,greater<int>());
        ll count=0;
        int p = min(m,n);
        for(int k=1;k<=p;k++){
            if(sumn>summ){
                //cout << sumn  << " "<< summ << "\n";
                break;
            }
            else{
                sumn = (sumn%M) + (b[k]%M)-(a[k]%M);
                summ = (summ%M) + (a[k]%M)-(b[k]%M);
                count++;
            }
        }
        if(sumn>summ){
            cout << count;
        }
        else{
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
