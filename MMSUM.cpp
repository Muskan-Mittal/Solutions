#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define pll pair<ll,ll>
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 100001
#define endl "\n"

void MOD(ll &x)
{
    
    if (x >= M) x -= M;
    if (x < 0) x += M;
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> sf(n), sb(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sf[0]=a[0];
        sb[n-1]=a[n-1];
        
        ll ans=a[0];

        for(ll i=1; i<n; i++)
        {
            sf[i] = max(a[i], sf[i-1]+a[i]);
            ans = max(ans, sf[i]);
        }

        for(ll i=n-2; i>=0; i--)
        {
            sb[i] = max(a[i], sb[i+1]+a[i]);
            ans = max(ans, sb[i]);
        }

        for(int i=1; i<n-1; i++)
        {
            ans = max(ans, sf[i-1]+sb[i+1]);
        }
        
        cout<<ans<<endl;

    }
}