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
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(), a.end());
        
        int i=0;

        while(i<n && a[i]==1)
        {
            i++;
            cout<<"1 ";
        }

        if(n-i==2 && a[n-1]==3 && a[n-2]==2)
        {
            cout<<"2 3";
        }
        else
        {
            for(int j=n-1; j>=i; j--)
                cout<<a[j]<<" ";
        }
        
        cout<<endl;
    }

}