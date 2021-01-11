#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define REP(i,a,b) for(int i=a;i<=b;i++)
const unsigned int M = 1000000007;
using namespace std;
struct point{
    double x;
    double y;
};
int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    struct point p[n];
    for(int i=0;i<n;i++){
        cin >> p[i].x >> p[i].y;
    }
    int count =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double m = (p[j].y-p[i].y)/(p[j].x-p[i].x);
            if((m<=1)&&(m>=-1)){
                count ++;
            }
        }
    }
    cout << count;
    return 0;
}
