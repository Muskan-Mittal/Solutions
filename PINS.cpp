#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n;
        string ans = "1";
        for (int i = 0; i < n/10; i++){
            ans+="00000";
        }
        p = n%10;
        for (int i = 0; i < p/2; i++){
            ans+="0";
        }
        cout<<1<<" "<<ans<<"\n";
    }
    
    return 0;
}

