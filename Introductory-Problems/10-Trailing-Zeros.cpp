//my solution link : 

//trailing zeros
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TC	int tc;\
			cin >> tc;\
			while(tc--)\
 
void solve()
{
  ll n;
  cin >> n;
  ll count=0,i=5;
  while((n/i)>=1){
    count += n/i;
    i *= 5; 
  }
  cout << count << "\n";
}
 
int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
 
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("error.txt", "w", stderr);
//   freopen("output.txt", "w", stdout);
// #endif
	
  solve();
	
  return 0;
}
