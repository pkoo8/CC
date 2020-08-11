/* Codeforces #662 Div-02 */
#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%2==0){
			cout << (n/2) + 1 << "\n";
		}
		else{
			cout << (n-1)/2 + 1 << "\n";
		}
	}
	return 0;
}
