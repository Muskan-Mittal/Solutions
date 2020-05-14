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
//int dp[N][N];

void getMinSteps(int n, int m, int ops, int &ans)
{
    if(n>m)
        return;

    if(m==n)
    {
        ans = min(ans, ops);
        return;
    }

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

ll minSteps(int n, int m)
{
    if(n==m)
        return 0;

    vector<ll> dp(N, INT_MAX-1);
    dp[n]=0;
    for(int i=n; i<=m; i++)
    {
        if(dp[i]!=INT_MAX-1)
            for(int j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    int k;
                    k=i+j;
                    if(k<=m)
                        dp[k] = min(dp[k], dp[i]+1);
                    if(i!=i/j)
                    {
                        k=i+i/j;
                        if(k<=m)
                            dp[k] = min(dp[k], dp[i]+1);
                    } 
                }
            }
    }

    if(dp[m]>=INT_MAX-1)
        return -1;
    return dp[m];
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

        ll steps = minSteps(n,m);
        cout<<steps<<endl;
    }
}
// 8748 84362
// 235 98234
// 4 99991
// 82736 82736