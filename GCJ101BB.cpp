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

int getSwaps(int x, vector<ll> &dis, ll b)
{
    int n=dis.size(), swaps=0;
    for(int i=x+1; i<n; i++)
    {
        if(dis[x]>dis[i] && dis[i]<b)
        {
            swaps++;
        }
    }
    return swaps;
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int test=1; test<=t; test++)
    {
        int n,k,time;
        ll b;
        cin>>n>>k>>b>>time;
        vector<ll> x(n), dis(n);
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>x[i];
        for(int i=0; i<n; i++) cin>>v[i];
        
        for(int i=0; i<n; i++)
        {
            dis[i] = x[i] + (ll)(v[i]*time);
        }
        ll swaps=0, chicks=0;
        for(int i=n-1; i>=0; i--)
        {
            if(dis[i]>=b)
            {
                chicks++;
                swaps+=getSwaps(i, dis, b);
            }

            if(chicks==k)
                break;
        }
        cout<<"Case #"<<test<<": ";
        if(chicks==k)
            cout<<swaps<<endl;
        else
            cout<<"IMPOSSIBLE\n";
    }
}