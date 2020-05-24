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
        ll a,b,c,d,x,y,x1,x2,y1,y2;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        
        ll posx = x+b-a, posy = y+d-c;

        if(x==x2 && x==x1 && (a!=0 || b!=0) )
        {
            cout<<"No\n";
            continue;
        }

        if(y==y2 && y==y1 && (c!=0 || d!=0) )
        {
            cout<<"No\n";
            continue;
        }

        if(posx<=x2 && posx>=x1 && posy<=y2 && posy>=y1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}