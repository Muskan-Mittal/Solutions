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
    int n;
    cin>>n;
    vector<ll> wt(n), cost(n);
    ll m=0;
    for(int i=0; i<n; i++)
    {    
        cin>>wt[i]>>cost[i];
        m+=wt[i];
    }

    ll dp[n+1][m+1];

    for(int i=0; i<=m; i++) dp[0][i] = 0;
    for(int i=0; i<=n; i++) dp[i][0] = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(j>=wt[i-1])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-wt[i-1]] + cost[i-1]);
            else 
                dp[i][j] = dp[i-1][j];
        }
    }

    for(int i=1; i<=m; i++)
    {
        cout<<dp[n][i]<<" ";
    }
    cout<<endl;
}