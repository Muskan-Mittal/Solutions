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
void MOD(ll &x, ll m)
{
    if (x >= m) x -= m;
    if (x < 0) x += m;
}

void getFactors(vector<vector<int> >&sv, vector<int> &primes)
{
    for(int i=2; i<=100; i++)
    {
        int n = i;
        for(int j=0; j<25; j++)
        {
            int x=0;
            while(n!=1 && n%primes[j]==0)
            {
                n/=primes[j];
                x++;
            }
            sv[i][j]=x;
        }
    }
}

ll power(ll base, ll exp, ll m)
{
    if(exp==0)
        return 1;
    if(exp==1)
        return base%m;
    ll x = power(base, exp/2, m);
    x = (x*x)%m;
    if(exp%2)
    {
        return ((base%m)*x)%m;
    }
    else
    {
        return x;
    }
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,97};
    vector<vector<int> >sv(101, vector<int>(25));

    getFactors(sv,primes);

    // for(int i=0; i<25; i++)
    //     cout<<sv[15][i]<<" ";

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<vector<int> >cum(n, vector<int>(25));

    for(int i=0; i<25; i++)
    {
        cum[0][i] = sv[a[0]][i];
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<25; j++)
            cum[i][j] = cum[i-1][j]+sv[a[i]][j];
    }

    // for(int i=0; i<25; i++)
    //     cout<<cum[4][i]<<" ";

    int t;
    cin>>t;

    while(t--)
    {
        int l,r;
        ll m,ans=1;
        cin>>l>>r>>m;
        l--; r--;
        for(int i=0; i<25; i++)
        {
            if(l<1)
                ans=(ans*power(primes[i], cum[r][i], m))%m;
            else
                ans=(ans*power(primes[i], cum[r][i]-cum[l-1][i],m))%m;
        }

        cout<<ans<<endl;
    }
}