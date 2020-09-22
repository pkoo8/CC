#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==3||n==2){
        cout << "NO SOLUTION";
    }
    else if(n==1){
        cout<< "1";
    }
    else{
        if(1){
            for(int i=1;i<=n/2;i++){
                cout << 2*i << " ";
            }
            for(int i=1;i<=(n+1)/2;i++){
                cout << 2*i -1<< " ";
            }
        }
    //     for(int i=1;i<=n;i++){
    //     a[i]=i;
    // }
    // for(int i=1;i<=n;i=i+2){
    //     cout << a[i] << " ";
    // }
    }  
    return 0;
}