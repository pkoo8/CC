#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,d;
        cin >> n >> d;
        int a[n];
        int x,y;
        x=y=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>=80||a[i]<=9){
                x++;
            }
        }
        y = n-x;
        int ans=0;
        if(x%d==0){
            ans = ans+ x/d;
            if(y%d==0){
                ans = ans + y/d;
            }
            else{
                ans = ans + y/d + 1;
            }
        }
        else{
            ans = ans + x/d + 1;
            if(y%d==0){
                ans = ans + y/d;
            }
            else{
                ans = ans + y/d + 1;
            }
        }
        cout << ans << "\n";

    }
}
