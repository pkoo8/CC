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
        int n,m;
        cin >> n;
        m=n;
        int count=0;
        int x=0;
        while(n!=0){
            if(n%10==0){
                x++;
            }
            n=n/10;
            count++;
        }
        cout << count -x << "\n";
        int a[count];
        for(int i=0;i<count;i++){
            if(m%10!=0){
                a[i] = m;
            }
            m=m/10;
            cout << a[i] <<  " " ;

        }
        cout << "\n";
    }
    return 0;
}
