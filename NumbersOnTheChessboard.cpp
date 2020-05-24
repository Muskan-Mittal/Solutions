#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int q;
    cin>>q;
    while(q--){
        long long x,y,ans;
        cin>>x>>y;
        if((x+y)%2==0){
            ans=((x-1)*n + y + 1)/2;
        }
        else{
            ans=(n*n+(x-1)*n + y + 1)/2;
        }

        cout<<ans<<"\n";
    }

}
