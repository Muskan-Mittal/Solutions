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
    
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
            break;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }

        if(sum%n)
            cout<<-1<<endl;
        else
        {
            int avg = sum/n;

            for(int i=0; i<n; i++)
            {
                a[i]-=avg;
            }

            for(int i=1; i<n; i++)
            {
                a[i] += a[i-1];
            }

            int ans=abs(a[0]);
            for(int i=0; i<n; i++)
            {
                ans = max(ans, abs(a[i]));
            }
            cout<<ans<<endl;
        }
    }
}