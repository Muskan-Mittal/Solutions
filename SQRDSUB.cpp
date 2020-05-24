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
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            if(a[i]%2)
                v[i]=0;
            else if(a[i]%4==0)
                v[i]=2;
            else
                v[i]=1;
        }

        ll res=0, curr_sum=0;
        unordered_map<ll, ll> mp;

        for(int i=0; i<n; i++)
        {
            curr_sum+=v[i];

            if(curr_sum == 1)
                res++;

            if(mp.find(curr_sum-1)!=mp.end())
                res+=mp[curr_sum-1];

            mp[curr_sum]++;
        }

        ll ans = (n*(n+1))/2 - res;
        cout<<ans<<endl;
    }
}