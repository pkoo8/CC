#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    double d1,v1,d2,v2,p,pd;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    double d=0;
    //d=d+(p+(p%pd))/pd;
    if(d1==d2){
        d=d1-1;
        pd = v1+v2;
        d = d+ceil(p/pd);
    }
    else if(d1>d2){

        if((p/v2)>d1){
        d=d1-1;
        pd=v2;
        p = p - (d1-d2)*pd;
        pd = v1+v2;
        d=d+ceil(p/pd);
        }

        else{
            d=d2-1;
            pd=v2;
            d=d+ceil(p/pd);
        }
        
    }
    else{
        if((p/v1)>d2){
        d=d2-1;
        pd=v1;
        p=p-(d2-d1)*pd;
        pd=v1+v2;
        d=d+ceil(p/pd);
        }
        else{
            d=d1-1;
            pd=v1;
            d=d+ceil(p/pd);
        }
        
    }
    cout << (int)d << "\n";

}