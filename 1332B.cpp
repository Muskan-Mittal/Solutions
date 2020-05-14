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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        vector<int> clr(n);
        int tmp=0;
        for(int i=0; i<n; i++)
        {
            if(clr[i]==0)
                clr[i]=1;
            for(int j=i+1; j<n; j++)
            {
                if(__gcd(a[i],a[j])==1)
                {
                    //cout<<clr[i]<<" "<<clr[j]<<". ";
                    if(clr[j]==0 || clr[i]==clr[j])
                    {
                        if(clr[i]==11)
                            clr[j] = 1;
                        else
                            clr[j] = clr[i]+1;
                    }
                }
            }
        }
        int max_clrs=0;
        for(int i=0; i<n; i++)
        {
            max_clrs = max(max_clrs, clr[i]);
        }

        cout<<max_clrs<<endl;
        for(auto x:clr)
            cout<<x<<" ";
        cout<<endl;
    }
}