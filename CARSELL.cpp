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
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(), a.end());
        
        ll profit = 0, loss=0;
        for(int i=n-1; i>=0; i--)
        {
            if((a[i]-loss)>0)
                profit= (profit%(ll)M + (a[i]-loss)%M)%(ll)M;
            //cout<<profit<<" ";
            loss++;
        }
        cout<<profit<<endl;
    }
}