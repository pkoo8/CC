#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum=sum+a[i];
        }
        if(sum==m){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
