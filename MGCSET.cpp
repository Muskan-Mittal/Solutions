#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m, cnt=0,k;
        bool flag=false;
        cin>>n>>m;
        ll a[40];
        for(ll i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%m==0)
                cnt++;
        }
        k=pow(2,cnt)-1;
        cout<<k<<"\n";
    }
}
