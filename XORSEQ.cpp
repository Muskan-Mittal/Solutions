#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);

ll getxor(ll n)
{
    int mod = n % 4; 
  
    if (mod == 0) 
        return n; 
    else if (mod == 1) 
        return 1;
    else if (mod == 2) 
        return n + 1; 
    else if (mod == 3) 
        return 0; 
}

ll XOR(ll l ,ll r)
{
    return getxor(l-1)^getxor(r);
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    string s;
    for(ll i=0; i<=n; i++)
    {
        s.push_back('0');
    }
    
    while(q--)
    {
        ll c,x;
        cin>>c>>x;

        if(c==1)
        {
            s[x] = '1';
        }
        else
        {
            ll i=x, l, r;
            while(i<=n && s[i]!='0')
            {
                i++;
            }
            l=i;
            r=l+1;
            while(r<=n && s[r]!='1')
            {
                r++;
            }
            r--;
            cout<<XOR(l,r)<<endl;
        }
    }
}