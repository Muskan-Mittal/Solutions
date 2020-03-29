#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll extr(ll *a, ll n, ll x){
    ll ans = 0; 
    unordered_map<ll, ll> m;
 
    for (ll i=0; i<n ; i++)
    {
        ll c =  x^a[i];
        if (m.find(c) != m.end())
            ans += m[c];
        m[a[i]]++;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll a[1000001], e=0, o=0, ans=0;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0;i<n; i++){
            if(a[i]%2==0)
                e++;
            else
                o++;
        }
        ans = e*(e-1)/2 + o*(o-1)/2 - extr(a,n,2) - extr(a,n,0);
        cout<<ans<<"\n";
    }
}
