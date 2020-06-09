#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define pll pair<ll,ll>
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 100001
#define endl "\n"

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

        bool flag=true;
        unordered_map<int, int> coins;
        for(int i=0; i<n; i++)
        {
            coins[a[i]]++;
            int ret = a[i]-5;
            if(ret>0)
            {
                if(ret==5)
                {
                    if(coins[ret]>=1)
                    {
                        coins[ret]--;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
                else if(ret==10)
                {
                    if(coins[ret]>=1)
                    {
                        coins[ret]--;
                    }
                    else if(coins[5]>=2)
                    {
                        coins[5]-=2;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }
        if(flag)
                cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}