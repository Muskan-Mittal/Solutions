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
        int n,k;
        cin>>n>>k;
        ll sum=0;
        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        sort(a.begin(),a.end());

        if(k>n/2)
            k = n-k;

        ll diff=0;

        for(int i=0; i<k; i++)
        {
            diff+=a[i];
        }
        diff = sum-2*diff;
        cout<<diff<<endl;
    }
}