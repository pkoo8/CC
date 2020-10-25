#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int count =0;
        bool onep=false;
        stack <int > s;
        for(int i=0;i<n;i++){
            if(!onep&&a[i]==1){
                s.push(a[i]);
            }
            if()
            


        }

        }
        cout << count << "\n";
    }
    return 0;
}
        // for(int i=0;i<n;){
        //     if(a[i]==1){
        //         for(int j=i;j<n;j++){
        //             if(a[j]==0){
        //                 count++;
        //             }
        //             if(a[j]==1){
        //                 i==j-1;
        //                 break;
        //             }
        //         }
        //     }
        //     i++; 