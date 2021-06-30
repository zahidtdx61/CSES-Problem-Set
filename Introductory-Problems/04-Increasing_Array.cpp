//my solution link : https://cses.fi/paste/1ca6146c53c7ebed1a9e77/

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
 
    //#ifndef ONLINE_JUDGE
    //  freopen("input.txt", "r", stdin);
    //	freopen("error.txt", "w", stderr);
    //	freopen("output.txt", "w", stdout);
    //#endif
 
    int n;
    cin >> n;
    ll *arr = new ll [n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    }
    ll count=   
    for(int i=0; i<n-1; i++){
    	if(arr[i]>arr[i+1]){
    		count += abs(arr[i]-arr[i+1]);
    		arr[i+1] = arr[i];
    	}   }
    
    cout << count << "\n";
 
    delete [] arr;
    return 0;
}
