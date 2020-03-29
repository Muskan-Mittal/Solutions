#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<ll> a(n), b(n), c(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<n; i++)
    {
        c[i] = a[i]-b[i];
    }

    sort(c.begin(), c.end());

    ll ans=0;
    for(int i=1; i<n; i++)
    {
        if(c[i]<=0)
            continue;
        ll j = lower_bound(c.begin(), c.end(), 1-c[i]) - c.begin();
        ans+=(i-j);
    }

    cout<<ans<<endl;
        
}