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

bool cmp(pll &p1, pll &p2)
{
    return p1.S < p2.S;
}

bool isCompatible(pll p1, pll p2)
{
    if(p1.S > p2.F)
        return false;
    return true;
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
        int n;
        ll k;
        cin>>n>>k;

        unordered_map<ll, vector<pll> > mp;
        for(int i=0; i<n; i++)
        {
            ll s,f,p;
            cin>>s>>f>>p;
            mp[p].push_back({s,f});
        }

        ll ans=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            vector<pll> vec = it->S;
            if(vec.size()>1)
            {
                sort(vec.begin(), vec.end(), cmp);
                ans++;
                pll selected = vec[0];
                for(int i=1; i<vec.size(); i++)
                {
                    if(isCompatible(selected, vec[i]))
                    {
                        ans++;
                        selected = vec[i];
                    }
                }
            }
            else
                ans++;
        }

        cout<<ans<<endl;
        
    }
}   