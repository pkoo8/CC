#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
int d1,d2,v1,v2,p;
cin >> d1 >> v1 >> d2 >> v2 >> p;
int count =0;
count = min(d1,d2);
p=(d1<d2)?(p-(max(d1,d2)-min(d1,d2))*v1):(p-(max(d1,d2)-min(d1,d2))*v2);


return 0;
}