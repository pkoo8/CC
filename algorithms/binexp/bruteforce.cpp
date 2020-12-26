#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int temp =1;
    for(int i=0;i<b;i++){
        temp = temp * a;
    }
    cout << temp << "\n";
    return 0;
}
//Time Complexity : O(b)