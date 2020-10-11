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
        int k;
        cin >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long sum=0;
        int count =0;
        for(int i=0;i<n;i++){
            if((a[i]+sum)>=k){
                sum = sum + a[i] - k;
                count++;
            }
            else{
                break;
            }
        }
        if(sum%k==0){
            count = count + (sum/k);    
        }
        cout << count + 1 << "\n";
    }
    return 0;
}
