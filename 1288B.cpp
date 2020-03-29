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
    //ll mx = 1e9;
    //cout<<mx<<endl;
    

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,ct=0;
        cin>>a>>b;

        // Count is dependent on values of b and not on a
        // Ans : a*(|b+1|-1)
        ll ans = a*((to_string(b+1)).size() - 1);
        cout<<ans<<endl;
    }
}