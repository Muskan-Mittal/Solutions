#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);

ll dist(ll x1,ll y1, ll x2, ll y2)
{
    return abs(x1-x2)+abs(y1-y2);
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x0, y0, ax, ay, bx, by, xs, ys, t;
    cin>>x0>>y0>>ax>>ay>>bx>>by;
    cin>>xs>>ys>>t;

    vector<ll> xi, yi;
    xi.push_back(x0);
    yi.push_back(y0);
    ll tmp_x, tmp_y;
    //ll LIMIT =  LLONG_MAX;
    ll LIMIT =  (1LL << 62) - 1;
    while((LIMIT - bx) / ax >= xi.back() && (LIMIT - by) / ay >= yi.back())
    {
        xi.push_back(ax*xi.back()+bx);
        yi.push_back(ay*yi.back()+by);
    }

    ll n = xi.size(), dis=0, tnodes=0, to_left, to_right;

    for(ll i=0; i<n; i++)
    {
        for(ll j=i; j<n; j++)
        {
            to_left = dist(xs,ys,xi[i],yi[i]);
            to_right = dist(xs,ys,xi[j],yi[j]);
            dis = dist(xi[i],yi[i],xi[j],yi[j]);
            if(dis<=t-to_left || dis<=t-to_right)
                tnodes = max(tnodes, j-i+1);
        }
    }
    
    cout<<tnodes<<endl;
}