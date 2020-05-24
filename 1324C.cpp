#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;

        int d=0, prev_i=-1, n=a.size();
        
        for(int i=0; i<n; i++)
        {
            if(a[i]=='R')
            {
                d=max(d,i-prev_i);
                prev_i = i;
            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if(a[i]=='R')
            {
                if(d<n-i)
                {
                    d=max(d,n-i);
                }
                break;
            }
        }
        if(d==0)
        {
            d = n+1;
        }
        cout<<d<<endl;
    }
}