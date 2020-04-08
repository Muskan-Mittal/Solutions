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

ll ways(int l, int rem, int m, vector<ll> &dp)
{
    if(rem<0)
        return 0;

    if(rem==0)
    {
        return 1;
    }

    if(dp[rem]!=-1)
        return dp[rem];

    dp[rem]=0;
    for(int i=1; i<=l; i+=2)
    {
        dp[rem] = (dp[rem]%m + ways(l, rem-i, m, dp)%m)%m;
    }
    return dp[rem];
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
        int n,m;
        ll ans;
        cin>>n>>m;
        int l;
        if(n%2==1) 
            l = n-2;
        else
            l = n-1;

        vector<ll> dp(n+1,-1);

        ans = ways(l, n, m, dp);

        cout<<ans*2<<endl;
    }
}