//my solution link : https://cses.fi/paste/73a5711eb6e1b76d179792/
//this is very simple solution. This problem also can be solved by using XOR operation.

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,sum;
    cin >> n;
    sum = n*(n+1)/2 ;
    while((n-1) != 0){
        int x;
        cin >> x;
        sum -= x;
        n--;
    }
    cout << sum << endl;
    
    return 0;
}
