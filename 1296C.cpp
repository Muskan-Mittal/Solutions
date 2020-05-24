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
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<pii,int> mp;
        mp[make_pair(0,0)]=0;
        //mp.insert({"Hi",-1});
        
        int prev_x = 0, prev_y = 0, x=0,y=0, i, l=-1, r=n;
        for(i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                x = prev_x; y = prev_y+1;
            }
            else if(s[i]=='D')
            {
                x = prev_x; y = prev_y-1;
            }
            else if(s[i]=='L')
            {
                x = prev_x-1; y = prev_y;
            }
            else if(s[i]=='R')
            {
                x = prev_x+1; y = prev_y;
            }
            if(mp.count({x,y}))
            {
                if(i-mp[{x,y}]+1<r-l+1)
                {
                    l = mp[{x,y}];
                    r = i; 
                }
            }
            mp[{x,y}] = i+1;

            prev_x = x; prev_y = y;
        }

        if(l==-1)
            cout<<-1<<endl;
        else 
            cout<<l+1<<" "<<r+1<<endl;
    }
}