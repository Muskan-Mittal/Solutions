#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 10000001

vector<ll> spf(N);

bool divisors(ll x, ll &k)
{
    ll cnt=0, a=x;
    while(a%2==0)
    {
        a/=2;
        cnt++;
    }

    if(cnt>=k)
        return true;

    for(int i=3; i<=sqrt(x); i+=2)
    {
        while(a%i==0)
        {
            a/=i;
            cnt++;
        }
        if(cnt>=k)
            return true;
    }

    if(a>2) cnt++;
    if(cnt>=k)
            return true;
    return false;
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"s:"<<prime[prime.size()-1]<<endl;

    int t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        
        bool fl = divisors(x,k);

        if(!fl)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
}