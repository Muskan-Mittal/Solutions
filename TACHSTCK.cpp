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
    int n;
    ll d;
    cin>>n>>d;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int prs=0, i=1;

    sort(a.begin(), a.end());

    while(i<n)
    {
        if(a[i]-a[i-1]<=d)
        {
            prs++;
            i+=2;
        }
        else
        {
            i++;
        }
    }

    cout<<prs<<endl;
}