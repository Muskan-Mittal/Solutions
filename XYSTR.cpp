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
        string s;
        cin>>s;
        n=s.size();
        ll pairs=0;
        for(int i=1; i<n; i++)
        {
            if((s[i]=='x' && s[i-1]=='y') || (s[i-1]=='x' && s[i]=='y'))
            {
                pairs++;
                i++;
            }
        }
        cout<<pairs<<endl;        
    }
}