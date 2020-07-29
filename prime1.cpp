/* 29 th July 2020*/
/* Initial program to find if a given number is prime or not*/ 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int flag =-1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            cout << i << " " << endl ;
            break;   
        }
    }
    if(flag){
        cout << "Yes! It is a prime"<< endl;
    }
    else{
        cout << "It is as ordinary as you can imagine it to be"<<endl;
    }
}