//my solution link : https://cses.fi/paste/178b508e460bd69317a980/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string str;
    int maxLen=0,count=1;
    cin >> str;
    for(int i=1; i<str.length(); i++){
        if(str[i]==str[i-1]){
            count++;
        }
        else{
            maxLen = max(maxLen, count);
            count = 1;
        }
    }
    maxLen = max(maxLen, count);
 
    cout << maxLen << "\n";
 
    return 0;
}
