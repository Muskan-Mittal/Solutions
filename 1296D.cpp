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
    
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int ans=0, rem;
    vector<int>req;
    for(int i=0; i<n; i++)
    {
        rem = v[i]%(a+b);
        if(rem<=a && rem!=0)
            ans++;
        else
        {
            if(rem==0)
            {
                int p = ceil((float)(a+b)/(float)a) - 1;
                req.push_back(p);
            }
            else
            {
                int p = ceil((float)rem/(float)a) - 1;
                req.push_back(p);
            }
        } 
    }

    sort(req.begin(), req.end());

    // for(auto x:req)
    //     cout<<x<<" ";

    int used = 0;
    for(int i=0; i<req.size(); i++)
    {
        used+=req[i];
        if(used<=k)
            ans++;
        else
            break;
    }

    cout<<ans<<endl;

}