#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 1000001
int spf[N];

void sieve()
{
    spf[1]=1;
    for(int i=2; i<N; i++)
        spf[i]=i;

    for(int i=2; i<N; i+=2) spf[i]=2;

    for(int i=3; i*i<sqrt(N); i+=2)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<N; j++)
            {
                if(spf[j]==j)
                    spf[j]=i;   
            }
        }
    }
}

void factorize(int x) 
{ 
    int tmp; 
    while (x != 1) 
    { 
        tmp = spf[x]; 
        if(x % tmp == 0) 
        { 
            mp[spf[x]]++; 
            x = x/spf[x]; 
        } 
        while (x % tmp == 0) 
            x = x/tmp; 
    } 
} 

bool checkIsCoprime(int x) 
{ 
    int temp;
    while (x!=1) 
    { 
        temp = spf[x]; 
        if (x%temp==0 && mp[temp]>1) 
            return false; 
        while (x%temp==0) 
            x/=temp; 
    } 
    return true; 
} 

void coprimes(ll n, vector<vector<ll> >&res)
{
    vector<ll>v;
    v.pb(1); v.pb(2); v.pb(3);
    res.push_back(v);
    ll i,j,k;

    for(i=4; i<=n; i+=2)
    {
        vector<ll>k;
        k.pb(i);
        res.push_back(k);
    }

    for(i=5; i<=n; i+=2)
    {
        
    }
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    for(int i=0; i<10; i++) cout<<spf[i]<<" ";
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n==1 || n==2)
        {
            cout<<1<<endl;
            if(n==1)
                cout<<"1 1"<<endl;
            else
                cout<<"2 1 2"<<endl;
            continue;
        }

        vector<vector<ll> >res;
        coprimes(n,res);
        cout<<res.size()<<endl;

        
        for(int i=0; i<res.size(); i++)
        {
            //cout<<res[i].size()<<" ";
            for(int j=0; j<res[i].size(); j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}