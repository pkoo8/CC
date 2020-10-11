#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,p,k;
        long long x;
        cin >> n >> x >> p >> k;
        long long a[n];
        int isthere =0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==x){
                isthere=1;
            }
        }
        int count =0;
        sort(a,a+n);
        if(a[p-1]==x){
            cout << 0;
        }
        else if(p==k){
            cout <<1;
        }
        else if(a[p-1]<x){
            if((p>k)&& (isthere)){
                cout << p-k;
            }
            else if(( p<k) && (isthere)){
                cout << k-p;
            }
            else{
                cout << -1;
            }
        }
        else if(a[p-1]>x){
            if(k>p){
                cout << -1;
            }
            else if(p<k && (!isthere)){
                cout << p-k;
            }
            else{
                cout << -1;
            }
        }
        cout << "\n";
    }
    return 0;
}
