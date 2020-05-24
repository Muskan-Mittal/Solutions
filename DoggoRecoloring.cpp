#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool flag=false;
    cin>>n;
    char str[100001];
    unordered_map<char, int>mp;
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }

    for(auto it=mp.begin(); it!=mp.end(); it++){
        int a=it->second;
        if(a>=2){
            flag=true;
            break;
        }
    }
    if(n==1)
        flag=true;

    if(flag)
        cout<<"Yes";
    else
        cout<<"No";

}
