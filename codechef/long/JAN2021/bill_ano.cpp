#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<=b;i++)
const unsigned int M = 1000000007;
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
        long long n,k,x,y;
        cin >> n >> k >> x >> y;
        bool signx = 1,signy =1;
        long long count =0;
        while(k!=0){
            long long temp =0;
            if(signx==1&&signy==1){
                temp = min(n-x,n-y);
                x+=temp;
                y+=temp;
                k--;
                if(x==n){
                    signx=0;
                }
                if(y==n){
                    signy=0;
                }
                if(x==n&&y==n){
                    k=0;
                }
            }
            else if(signx==0&&signy==0){
                temp = min(x,y);
                x-=temp;
                y-=temp;
                k--;
                if(y==0){
                    signy=1;
                }
                if(x==0){
                    signx=1;
                }
                if(x==0&&y==0){
                    k=0;
                }
            }
            else if(signx==1&&signy==0){
                temp=min(n-x,y);
                x+=temp;
                y-=temp;
                k--;
                if(y==0){
                    signy=1;
                }
                if(x==n){
                    signx = 0;
                }
                if(x==n&&y==0){
                    k=0;
                }
            }
            else if(signx==0&&signy==1){
                temp = min(x,n-y);
                x-=temp;
                y+=temp;
                k--;
                if(x==0){
                    signx =1;
                }
                if(y==n){
                    signy = 0;
                }
                if(x==0&&y==n){
                    k=0;
                }
            }
        }
        cout << x << " " << y << "\n";
    }
    return 0;
}
