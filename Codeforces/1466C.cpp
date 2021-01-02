#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const unsigned int M = 1000000007;
using namespace std;
bool isPalindrome(string str) { 
  int i = 0, j = str.size() - 1; 
  
  // traversing from both the ends 
  while (i < j) 
  
    // not palindrome 
    if (str[i++] != str[j--]) 
      return false; 
  
  // palindrome 
  return true; 
} 

int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n=s.length();
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                s[i] = s[i] + 1;
                count++;
            }
            //if(s[i]==s[i+1]||s[i-1]==s[i+1])
        }
        for(int i=1;i<n-1;i++){
            if(s[i-1]==s[i+1]){
                s[i]=s[i]+1;
                count++;
            }
        }
        if(count==n){
            cout << count/2;
        }
        else{
            cout << count;
        }
        cout << "\n";
    }
    return 0;
}
