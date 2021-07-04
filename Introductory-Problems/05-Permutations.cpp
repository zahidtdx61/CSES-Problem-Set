//my solution link : https://cses.fi/paste/b2e373a558772f2c1a9ea5/

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
 
//#ifndef ONLINE_JUDGE
//  freopen("input.txt", "r", stdin);
//  freopen("error.txt", "w", stderr);
//  freopen("output.txt", "w", stdout);
//#endif
 
    ll n;
    cin >> n;
    if(n==1){
        cout << n << "\n";
        return 0;
    }
    else if(n<4){
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    for(ll i=2; i<=n ; i += 2){
        cout << i << " ";
    }
    for(ll i=1; i<=n; i+=2){
        cout << i << " ";
    }
    cout << "\n";
	return 0;
}
