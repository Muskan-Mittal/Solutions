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
        int n, k;
        cin>>n>>k;
        vector<ll> a(n), pl(n), pr(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(), a.end());
        
        pl[0]=a[0];
        //cout<<"Pl: "<<pl[0]<<endl;
        for(int i=1; i<n; i++)
        {
            pl[i] = (pl[i-1] * a[i]);
        }

        pr[n-1]=a[n-1];
        for(int i=n-2; i>=0; i--)
        {
            pr[i] = (pr[i+1] * a[i]);
        }        

        ll ans=pr[n-k];
        for(int i=0; i<k; i++)
        {
            if(i!=k-1)
                ans = max(ans, (pl[i]*pr[n-k+i+1]));
            else
                ans = max(ans, pl[k-1]);
        }
        MOD(ans);
        cout<<ans<<endl;
    }
}