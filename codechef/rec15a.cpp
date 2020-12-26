#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long max=0,time=0;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>max){
                max=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(max-a[i]){
                if((max-a[i])%2==0){
                    time+=2;
                }
                else{
                    time+=1;
                }
            }
        }
        cout << time << "\n";


    }
}
