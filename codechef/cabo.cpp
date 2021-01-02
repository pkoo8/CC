#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const unsigned int M = 1000000007;
using namespace std;
void decToBinary(int k,int count,char a[],int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
    int countx;
  
    // counter for binary array 
    int i = 1; 
    while (k > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = k % 2; 
        if(binaryNum[i]) count++;
        k = k / 2; 
        i++; 
        countx++;
    } 
    
    //if(count==n){
    for(int p=1;p<i-1;p++){
        if(binaryNum[p]){
            cout << a[p] << " ";

        }
        
    //}

    }
    

  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
int main(){
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    char alpha[26];
    for(int i='a';i<='z';i++){
        alpha[int(i)-96] = i;
        cout << alpha[int(i)-96] << " ";

    }
    cout << "\n";
    while(t--){
        long long n,k;
        cin >> n >> k;
        int count=0;
        decToBinary(k,count,alpha,n);
        cout << "\n";
    }
    return 0;
}
