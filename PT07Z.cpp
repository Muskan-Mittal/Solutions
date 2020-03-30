#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 10001

vector<int> adj[N];
vector<int> vis(N);

void dfs(int st, vector<int> &dis)
{
    vis[st]=1;
    for(auto x: adj[st])
    {
        if(!vis[x])
        {
            dis[x] = dis[st]+1;
            dfs(x,dis);
        }
    }
}


int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int u,v,src=0;
    for(int i=0; i<n-1; i++)
    {
        
        cin>>u>>v;
        adj[u].pb(v); adj[v].pb(u);
    }
    for(int i=0; i<=n; i++) vis[i]=0;

    vector<int> dis(n+1);
    
    dfs(1, dis);
    
    int mx = dis[0];
    for(int i=1; i<=n; i++)
    {
        if(dis[i]>mx)
        {
            src = i;
            mx = dis[i];
        }
    }
    //cout<<"src:"<<src<<endl;
    for(int i=0; i<=n; i++) 
    {
        vis[i]=0; dis[i]=0;
    }

    dfs(src, dis);
    
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        ans = max(ans, dis[i]);
    }
    cout<<ans<<endl;
}