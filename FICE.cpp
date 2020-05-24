#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define pb(x) push_back(x)
#define N 1001
int M; 
void MOD(int &x)
{
    if (x >= M) x -= M;
    //if (x < 0) x += M;
}


int ways(int n, int m)
{
    int fib[n+1];

    fib[0]=0; fib[1]=1;
    fib[2]=1;
    for(int i=3; i<=n; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
        if(fib[i]>=m) fib[i]-=m;
    }
    return fib[n];
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);        
        int ans = ways(n, m)*2;
        if(ans>=m)
            ans-=m;
        printf("%d\n", ans);
    }
}