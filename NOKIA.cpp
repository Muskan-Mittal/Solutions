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
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> maxl(40), minl(40);

    for(int i=1; i<40; i++)
    {
        int x = i/2;
        minl[i] = minl[x]+minl[i-1-x]+i+1;
        maxl[i] = i+1+maxl[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m<minl[n])   
            cout<<-1<<endl;
        else if(m<=maxl[n])
            cout<<0<<endl;
        else
            cout<<m-maxl[n]<<endl;
    }
}