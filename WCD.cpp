#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    long long p[150001][2];
    for(long i=0; i<n; i++){
        cin>>p[i][0]>>p[i][1];
    }
    long long g=p[0][0]*p[0][1];
    for(long i=1; i<n;i++){
        g=__gcd(g,p[i][0]*p[i][1]);
    }

    if(g==1){
        cout<<"-1";
        return 0; 
    }
    long long h;
    for(long i=0; i<n;i++){
        h=__gcd(g,p[i][0]);
        if(h==1){
            g=__gcd(g,p[i][1]);
        }else
            g=h;
    }
    cout<<g;
}
