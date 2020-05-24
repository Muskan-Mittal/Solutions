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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<ll> a(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll lcm=a[0];
        for(int i=1; i<n; i++)
        {
            lcm= (lcm*a[i])/__gcd(lcm,a[i]);
            
        }
        //cout<<lcm<<endl;
        ll maxlcm=lcm, newlcm;
        ll x=1;
        for(ll i=1; i<=m; i++)
        {
            newlcm=(lcm*i)/__gcd(lcm,i);
            //cout<<"lcm:"<<newlcm<<" ";
            if(newlcm>maxlcm)
            {
                maxlcm=newlcm;
                x=i;
            }
        }

        cout<<x<<endl;
    }
}