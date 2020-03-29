#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)

const ll N=100010;

ll fac[N];

ll power(ll x,ll n)
{
    if(n==0){return 1;}
    if(n==1){return x;}
    if(n%2==0){
        return power((x*x)%M,n/2);
    }
    if(n%2==1){
        return (power((x*x)%M,n/2)*x)%M;
    }
}

ll ncr(ll n,ll r)
{
    ll num=fac[n];
    ll denum=(fac[r]*fac[n-r])%M;
    ll ans=(num*power(denum,M-2))%M;
    return ans;
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
        ll a,b;
        cin>>a>>b;
        
        ll q = a/b;
        ll rem = a%b;

        if(rem==0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            ll ans = (q+1)*b - a;
            cout<<ans<<endl;
        }
        
    }
}