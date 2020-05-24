#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n1,n2,m,ans=0;
        cin>>n1>>n2>>m;

        ll mp = m*(m+1)/2;
        ll sub=0;
        if(mp>=n1 && mp>=n2)
        {
            sub = min(n1,n2);
            ans+=n1-sub+n2-sub;
        }
        else if(mp<n1 && mp<n2)
        {
            ans+=n1-mp+n2-mp;
        }
        else
        {
            sub = min(n1,n2);
            ans+=n1-sub+n2-sub;
        }

        cout<<ans<<endl;
    }
}