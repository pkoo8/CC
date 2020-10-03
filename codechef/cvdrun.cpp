#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,x,y,k;
        cin >> n >> k >> x >> y;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=0;
        }
        int p=x;
        a[p]=1;
        for(int i=0;i<n;i++){
            p=(p+k)%n;
            a[p]=1;
        }
        if(!a[y]) cout << "NO" << "\n";
        else cout << "YES" << "\n"; 
    }
    return 0;
}
