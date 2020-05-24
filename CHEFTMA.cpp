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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>k>>m;
        vector<int> plan(n), comp(n), white(k), black(m);
        multiset<int> buttons;

        for(int i=0; i<n; i++) cin>>plan[i];
        for(int i=0; i<n; i++) cin>>comp[i];
        for(int i=0; i<k; i++) cin>>white[i];
        for(int i=0; i<m; i++) cin>>black[i];

        for(int i=0; i<k; i++) buttons.insert(white[i]);
        for(int i=0; i<m; i++) buttons.insert(black[i]);

        ll ans=0;
        for(int i=0; i<n; i++)
        {
            if(comp[i]==plan[i])
                continue; 

            int diff = plan[i]-comp[i];

            multiset<int>::iterator it;
            if(buttons.size()>0)
                it = buttons.lower_bound(diff);
            else
            {
                ans+=diff;
                continue;
            }

            if(it!=buttons.end() && *it==diff)
            {
                buttons.erase(it);
            }
            else
            {
                if(it!=buttons.begin())
                {
                    it--;
                    ans+=(diff - *it);
                    buttons.erase(it);
                }
                else
                {
                    ans+=diff;
                }
            }
        }
        cout<<ans<<endl;
    }
}