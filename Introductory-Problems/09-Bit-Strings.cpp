//my solution link : https://cses.fi/paste/76e185281d33c781253850/

#include <bits/stdc++.h>
using namespace std;
 
unsigned long long power(unsigned long long n) {
    unsigned long long base = 2, m=1000000007, res = 1;
 
    while (n > 0) {
        if (n & 1)
            res = res * base % m;
        base = base * base % m;
        n >>= 1;
    }
 
    return res;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	unsigned long long n, res;
	cin >> n;
 
	res = power(n);
	cout << res << "\n";
 
	return 0;
}
