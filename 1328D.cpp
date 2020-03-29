#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=1;
        cin>>n;
        vector<int> a(n), c(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        c[0]=1;

        for(int i=1; i<n; i++)
        {
            if(a[i-1] == a[i])
            {
                c[i]=c[i-1];
            }
            else
            {
                k=2;
                c[i] = c[i-1]>1? c[i-1]-1 : c[i-1]+1;
            }
        }

        if(a[n-1]!=a[0])
        {
            if(c[n-1]==c[0])
            {
                k++;
                c[n-1]=k;
            }
        }

        cout<<k<<endl;
        for(auto x:c)
            cout<<x<<" ";
        cout<<endl;
    }
}