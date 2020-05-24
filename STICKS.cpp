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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        map<int, int> mp;

        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }

        int s1=-1, s2=-1;

        for(auto it = mp.rbegin(); it!=mp.rend(); it++)
        {
            if(it->second>=4)
            {
                if(s1==-1)
                    s1=it->first;
                if(s2==-1)
                    s2=it->first;
            }
            else if(it->second>=2)
            {
                if(s1==-1)
                    s1=it->first;
                else if(s2==-1)
                    s2=it->first;
            }

            if(s1!=-1 && s2!=-1)
                break;
        }

        if(s1==-1 || s2==-1)
            cout<<-1<<endl;
        else        
            cout<<s1*s2<<endl;
    }
}