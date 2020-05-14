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

int reveal(int a, int b, int c)
{
    int m=0;
    for(m=0; m<INT_MAX; m++)
    {
        int val = a*m*m+b*m+c;
        if(val<2)
        {
            return 0;
        }
        for(int j=2; j<=sqrt(val); j++)
        {
            if(val%j==0)
            {
                return m;
            }
        }
    }
    return m;
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
        int a,b,c;
        cin>>a>>b>>c;
        
        int m = reveal(a,b,c);
        cout<<m<<endl;
    }
}