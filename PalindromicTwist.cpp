#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[101];
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>s[i];
        bool flag=false;
        for(int i=0; i<n/2; i++){
            if(s[i]==s[n-i-1]){
                flag=true;
                continue;
            }

            if(!(s[i]+1 != s[n-i-1]+1 && s[i]+1 != s[n-i-1]-1 && s[i]-1 != s[n-i-1]+1 && s[i]-1 != s[n-i-1]-1)){
                flag = true;
            }
            else{
                flag = false; break;
            }
        }

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }    
}
