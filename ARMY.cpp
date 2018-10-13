#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ng, nm;
        cin>>ng>>nm;
        int g[ng], m[nm];
        
        for(int i=0; i<ng; i++)
            cin>>g[i];
        for(int i=0; i<nm; i++)
            cin>>m[i];
        sort(g, g+ng);
        sort(m, m+nm);
        if(g[ng-1]>=m[nm-1]){
            cout<<"Godzilla\n";
        }
        if(m[nm-1]>g[ng-1]){
            cout<<"MechaGodzilla\n";
        }
    }
}
