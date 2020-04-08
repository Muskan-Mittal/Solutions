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
int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_map<int,ll>mp;
    vector<int> a;
    a.pb(-1);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.pb(x);
    }

    mp[1]=a[1];
    for(int i=2; i<=n; i++)
    {
        mp[i] = mp[i-1]*a[i];
    }
    int t;
    cin>>t;

    while(t--)
    {
        int l,r;
        ll m;
        cin>>l>>r>>m;
        ll ans=1;
        if(l>1)
            ans=(mp[r]/mp[l-1])%m;
        else
            ans=mp[r]%m;
        cout<<ans<<endl;
    }
}