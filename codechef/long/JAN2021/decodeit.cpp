#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const unsigned int M = 1000000007;
using namespace std;
int BtD(int n){
    int base =1;
    int dec=0;
    while(n!=0){

        dec=dec+((n%10)*base);
        n=n/10;
        base = base *2;

    }
    return dec;
}
int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // for(int i=4;i<n;i=i+4){
        //     cout << s[i] << " ";
        // }
        /*char s[n];
        // for(int i=0;i<n;i++){
        //     cin >> s[i];
        // }*/
        // cin >> s;
        string str;
        int y=0;
        for(int i=3;i<n;i=i+4){
            //int x = s[i]*1 + s[i-1]*10 + s[i-2]*100 + s[i-3]*1000;
            int num=0;
            int base=1;
            for(int j=i;j>=i-3;j--){
                
                if(s[j]=='1'){
                    num = num + base;
                }
                base = base * 2;

            }
            num = num + 97;

            cout << (char)num;

        }
        cout << "\n";

           // y = BtD(x);
            //cout << y << " " ;
            
            
            
            //int x = (int(s[i])*1) + (int(s[i-1])*10 )+ (int(s[i-2]) * 100 )+ (int(s[i-3]) * 1000);
            //int y = BtD(x);
            //cout << y << "\n";
            //y+=97;
            //char sy = (char) y;
            //str += sy;
        
        //cout << str << "\n";

        //cout << y << "\n";

    }
    return 0;
}
