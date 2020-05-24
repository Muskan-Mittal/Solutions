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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        unordered_map<int,int>mp;
        bool fl=false;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]==0)
                mp[a[i]]=i+1;
            else if(i-mp[a[i]]>0)
            {
                fl=true;
                break;
            }
        }
        
        if(fl)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}