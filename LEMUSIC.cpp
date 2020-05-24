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
    return p1.F<p2.F;
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
        cin>>n;
        map<ll, multiset<ll> > mp;
        
        for(int i=0; i<n; i++)
        {
            ll b,l;
            cin>>b>>l;
            mp[b].insert(l);
        }
        
        ll sweetness=0, total_bands=0, lens=0;
        vector<ll> v;

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            multiset<ll>::iterator itset = it->S.begin();
            v.pb(*itset);
            itset++;
            for( ;itset!=it->S.end(); itset++)
            {
                lens+=*itset;
            }
        }

        sort(v.begin(), v.end());

        for(ll i=0; i<v.size(); i++)
        {
            total_bands++;
            sweetness+=(total_bands*v[i]);
        }

        sweetness+=total_bands*lens;

        cout<<sweetness<<endl;
    }
}