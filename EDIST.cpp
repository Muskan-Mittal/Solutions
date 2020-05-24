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
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n = a.size(), m = b.size();
        ll dp[n+1][m+1];
        dp[0][0]=0;

        for(int i=1; i<=m; i++) dp[0][i] = i;
        for(int i=1; i<=n; i++) dp[i][0] = i;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(a[i-1]!=b[j-1])
                {
                    dp[i][j] = min(min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1])+1;
                }
                else
                    dp[i][j] = dp[i-1][j-1];
            }
        }
        
        cout<<dp[n][m]<<endl;
    }
}