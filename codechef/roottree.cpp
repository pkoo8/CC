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
        int countu =0;
        int countv =0;
        for(int i=1;i<n;i++){
            int u,v;
            cin >> u >> v;
            if(v==1){
                countv++;
            }
            else if(u==1){
                countu++;
            }
        }
        cout << min(countu,countv)-1 << "\n";
    }

    return 0;
}