#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d1[n];
    int d2[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin >> d1[i] >> d2[i];
        if(d1[i]==d2[i]){
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        if(a[i]==1 && a[i]==a[i+1] && a[i]==a[i+2]) {
            cnt=1;
            cout << "yes\n";
            return 0;
        }
    }
    cout << "no\n";
}