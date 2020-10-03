#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum =0;
        int turn=0;
        while(n!=0){
            if(turn==0){
                if(n%2==0){
                sum=sum+(n/2);
                n=n/2;
                turn=1;
                }
                else{
                sum=sum+1;
                n=n-1;
                turn =1;
                }
            }
            else if(turn==1){
                if(n%2==0){
                n=n/2;
                turn=0;
                }
                else{
                n=n-1;
                turn =0;
                }
            }
            
        }
        cout << sum <<"\n";
    }
    return 0;
}