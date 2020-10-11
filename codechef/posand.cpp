#include<iostream>
using namespace std;
bool isPowerOfTwo (int x) 
{ 
    return x && (!(x&(x-1))); 
} 
int solve(int k){
    if(isPowerOfTwo(k)){
        return 0;
    }
    else{
        if(isPowerOfTwo(k-1)){
        cout << k-1 << " " << k << " ";
        }
        else{
        cout << k << " ";
        }
    }   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1;
        }
        else if(n && (!(n&(n-1)))){
            cout << -1;
        }        
        else{
            for(int i=n;i>4;i--){
                solve(i);
            }
            cout << 1 << " " << 3 << " " << 2;
        }
        cout << "\n";
    }
    return 0;
}
