#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        int a[n];
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]>n){
                k++;
            }
            if(a[i]<=n){
                if(m[a[i]]==1){
                    k++;
                }
                else{
                   m[a[i]]++; 
                }
            }
        }
        cout<<k<<"\n";
    }
}
