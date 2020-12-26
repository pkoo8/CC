#include<iostream>
using namespace std;
int binpow(int a,int b){
    if(b==0){
        return 1;
    }
    int temp = binpow(a,b/2);
    if(b%2){
        return temp*temp*a;
    }
    else{
        return temp*temp;
    }
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << binpow(a,b) << "\n";
    return 0;
}