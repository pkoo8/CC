#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int>g1;
    for(int i=1;i<10;i++){
        g1.push_back(i);
    }
    for(auto i=g1.begin();i!=g1.end();i++){
        cout << *i << " ";
    }


    
    return 0;
}
