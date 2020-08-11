/* From Errichto */
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else if(b==1){
        return a;
    }
    else{
        return a * power(a,b-1);

    }
}
int main(){
    int a,b;
    cin >> a >> b;
    int k = power(a,b);
    cout << k;
    return 0;
}