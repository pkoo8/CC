#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int l=s.length();
    if(s[l-1]=='s'){
        s += "es";
    }
    else{
        s+="s";
    }
    cout << s << "\n";

    return 0;
}