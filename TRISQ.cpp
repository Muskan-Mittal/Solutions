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

ll squares(int b1, int b2)
{
    if(b1<4 || b2<4)
        return 0;
    if(b1==4 && b2==4)
        return 1;

    if(b1>4)
        return squares(b1-4, b2-4) + 1 + ((b1-4)/2)*2;
    else
        return squares(b1-4, b2-4) + 1;
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int base;
        cin>>base;
        ll sqr = squares(base, base);
        cout<<sqr<<endl;
    }
}