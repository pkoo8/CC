#include<iostream>
using namespace std;
const long long p = 10e7+9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long k;
        cin >> k;
        long long a[n];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum = (sum + (a[i]%p))%p;
        }
        cout << (sum/k)+1 <<"\n";       
    }
    return 0;
}
