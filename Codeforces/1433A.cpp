#include<iostream>
using namespace std;
int noofdigits(int a){
    int count =0;
    while((a%10)!=0){
        a=a/10;
        count++;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p = n%10;
        int k = noofdigits(n);
        int sum = 0;
        sum = sum + (p-1)*10;
        if(k==1){
            sum+=1;
        }
        else if(k==2){
            sum+=3;
        }
        else if(k==3){
            sum+=6;
        }
        else{
            sum+=10;
        }
        cout << sum << "\n";
    }
    return 0;
}
