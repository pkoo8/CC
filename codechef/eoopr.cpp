#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(b>a){
            if((b-a)%2){
                cout << 1 << "\n";
            }
            else{
                if((b-a)%4){
                    cout << 2 << "\n";
                }
                else{
                    cout << 3 << "\n";
                }
            }
        }
        else if (a>b){
            if((a-b)%2){
                cout << 2 << "\n";
            }
            else{
                cout << 1 << "\n";
            }
        }
        else{
            cout << 0 << "\n";
        }
    }
    return 0;
}
