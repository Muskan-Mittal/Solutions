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
    while(1)
    {
        string s;
        cin>>s;
        if(s.size()==1 && s[0]=='0')
            break;
        ll n = s.size();
        vector<ll> dp(n+1);
        dp[0]=1; dp[1]=1;
        for(ll i=2; i<=n; i++)
        {
            if(s[i-1]=='0' && s[i-2]=='0')
            {
                dp[n]=0;
                break;
            }
            else
            {
                dp[i] = ((s[i-1]!='0')? dp[i-1]:0) + (((s[i-2]=='1') || (s[i-2]=='2' && s[i-1]<='6'))? dp[i-2]:0);   
            }
        }

        // for(auto x:dp)
        //     cout<<x<<" ";
        // cout<<endl;
        cout<<dp[n]<<endl;
    }
}