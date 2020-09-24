#include<iostream>
using namespace std;
int arraySortedOrNot(int arr[], int n) 
{  
    if (n == 1 || n == 0) 
        return 1; 
  
    if (arr[n - 1] >= arr[n - 2]) 
        return 0; 
  
    return arraySortedOrNot(arr, n - 1); 
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if (arraySortedOrNot(a, n))  cout << "NO\n"; 
        else cout << "YES\n"; 

       
       
       
    }
    return 0;
}