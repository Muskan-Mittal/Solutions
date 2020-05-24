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

bool cmp(pii &p1, pii &p2)
{
    return ((p1.F-p1.S)>(p2.F-p2.S));
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        cin>>b[i];

    vector<pii> v;

    for(int i=0; i<n; i++)
    {
        v.push_back({a[i], b[i]});
    }

    sort(v.begin(), v.end(), cmp);

    // for (int i=0; i<n; i++)
    //     cout<<v[i].F<<" "<<v[i].S<<endl;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        if(x>0 && (v[i].F>=v[i].S))
        {
            ans+=v[i].F;
            x--;
        }
        else if(y>0)
        {
            ans+=v[i].S;
            y--;
        }
    }

    cout<<ans<<endl;
    
}