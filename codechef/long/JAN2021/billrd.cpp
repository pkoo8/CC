#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<=b;i++)
const unsigned int M = 1000000007;
using namespace std;
void check(ll n,ll k,ll a,ll b,ll count){
    if(a==n||b==n){
        count+=1;
    }
    if(a==b&&a==n){
        count =k;
    }
}
void move(ll n,ll k,ll a,ll b,ll count,bool sign){
    if(a==0 && sign=0){
        while(a!=n||b!=n){
            a++;
            b--;
        }
        sign =1;
        count++;
    }
    if(a==0 && sign = 1 ){
        while(a!=n||b!=n){
            a++;
            b++;
        }
        sign =0;
        count++;

    }

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
        long long n,k,x,y;
        cin >> n >> k >> x >> y;
        long long count=0;
        bool sign = 1;
        while(k){
            if(x==n||y==n) k--;
            else if(x<n&&y<n){
                if(x<y){
                    x=x+1;
                    y=y+1;
                }
            } 
        }

    }
    return 0;
}
