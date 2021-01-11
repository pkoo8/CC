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
        int a[n];
        int b[m];
        long long summ=0,sumn=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sumn+=a[i];
        }
        for(int j=0;j<m;j++){
            cin >> b[j];
            summ+=b[j];
        }
        sort(a,a+n);
        sort(b,b+m,greater<int>());
        long long count =0;
        int z = min(m,n);
        for(int k=0;k<z;k++){
            if(sumn<summ){
                sumn = sumn - a[k]+b[k];
                summ = summ - b[k]+a[k];
                count++;
            }
        }
        cout << count << "\n";
        
    }
    return 0;
}
