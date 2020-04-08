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

        bool fl = true;
        int cnt=0, k=0;

        while(a[k]!=1)
        {
            k++;
        }

        for(int i=k+1; i<n; i++)
        {
            if(a[i]==1)
            {
                if(cnt<5)
                {
                    fl = false;
                    break;
                }
                else
                    cnt=0;
            }
            else
            {
                cnt++;
            }
        }
        
        if(fl)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}