#include<iostream>
using namespace std;
int gcd(int a, int b){
    if (a == 0){
        return b;
    }
    if (b == 0){
        return a;
    }
    if (a == b){
        return a;
    }
    if (a > b){
        return gcd(a-b, b);
    }
    else{
        return gcd(a, b-a);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int b[n];
        int count=0;
        for(int i=1;i<=n;i++){
            cin >> b[i];  
        }
        for(int i=1;i<=n;i++){
            if(b[i]==i){
                count++; 
            }
            else{
                for(int j=1;j<=n;j++){
                     //for(int k=1;k<=n;k++){
                        if(gcd(i,j)==b[i] && j!=i){
                          count++;
                          break;
                        }                    
                   // }
                }
            }
        }
        if(count == n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
       
    }

    return 0;
}