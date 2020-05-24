#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 10001

ll power(int x, int y)
{
    if(y==0)
        return 1;
    if(y==1)
        return x;

    ll res = power(x,y/2)%M;
    if(y%2)
        return (x*res*res)%M;
    else
        return (res*res)%M;
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, ans;
        cin>>n;
        ll tmp = power(2, n/2);
        if(n%2==0)
        {
            ans = (3*tmp-2)%M;
        }
        else
        {
            ans = (4*tmp-2)%M;
        }
        cout<<ans<<endl;
    }
}
