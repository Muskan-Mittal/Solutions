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

ll getExpForTwo(ll n)
{
    ll power=0;
    while(n%2==0)
    {
        power++;
        n/=2;
    }
    return power;
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
        ll ts;
        cin>>ts;
        
        if(ts%2)
        {
            cout<<ts/2<<endl;
        }
        else
        {
            ll exp_min = getExpForTwo(ts);
            ll ans = ts/(ll)(pow(2,exp_min+1)+0.5);
            cout<<ans<<endl;
        }
    }
}