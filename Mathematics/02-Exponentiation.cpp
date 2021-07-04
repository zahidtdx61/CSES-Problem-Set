//my solution link : https://cses.fi/paste/6ec873331b813a871aada9/

#include <bits/stdc++.h>
using namespace std;
 
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 
void solve()
{
    long long a, b,m=7+pow(10,9);
    cin >> a >> b;
    cout << binpow(a,b,m) << "\n";
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    
    return 0;
}
