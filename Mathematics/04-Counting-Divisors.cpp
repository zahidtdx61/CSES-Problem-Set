//my solution link : https://cses.fi/paste/e37ed6b2cc04b7f7258b6c/

#include <bits/stdc++.h>
using namespace std;
 
int countDivisor(int n){
	if(n==1){
		return 1;
	}
	int count, res=1;
	for(int i=2; i*i<=n; i++){
		count=0; 
		while(n%i == 0){
			count++;
			n /= i;
		}
		res *= (count+1);
	}
	if(n>1){
		res *= 2;
	}
	return res;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int tc;
	cin >> tc;
 
	while(tc--){
		int n;
		cin >> n;
		cout << countDivisor(n) << "\n";
	}
 
	return 0;
}
