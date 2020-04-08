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
int dp[N][N];

void getMinSteps(int n, int m, int ops, int &ans)
{
    if(n>m)
        return;

    if(m==n)
    {
        ans = min(ans, ops);
        return;
    }

    if(dp[n][m]!=-1)
        return dp[n][m];
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            getMinSteps(n+i, m, ops+1, ans);
            if(i!=sqrt(n))
            {
                getMinSteps(n+(n/i), m, ops+1, ans);
            }   
        }
    }
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
        int n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=INT_MAX, ops=0;

        for(int i=0; i<=n; i++) for(int j=0; j<=m; j++) dp[i][j] = -1;
        getMinSteps(n,m,ops,ans);
        if(ans==INT_MAX)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
}
// 8748 84362
// 235 98234
// 4 99991
// 82736 82736