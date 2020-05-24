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

    vector<int> a(12);
    for(int i=0; i<12; i++)
    {
        a[i] = pow(2,i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        m=12;
        
        for(int i=11; i>=0; i++)
        {
            if(n>a[i])
            {
                
            }
        }
    }
}