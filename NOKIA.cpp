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

void getPermutations(int n, vector<int>v, vector<vector<int> >&prm)
{
    bool fl = true;
    while(fl)
    {
        fl = next_permutation(v.begin(), v.end());
        if(fl)
            prm.push_back(v);
    }
}

int getRopeLength(vector<vector<int> >&prm)
{
    int m = prm.size(), n = prm[0].size();
    for(int i=0; i<m; i++)
    {
        util(prm[i]);       
    }

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
        int n,m;
        cin>>n>>m;

        vector<int>v;
        vector<vector<int> >prm;
        for(int j=1; j<=n; j++)
        v.pb(j);
        getPermutations(n, v, prm);
        // for(int i=0; i<prm.size(); i++) 
        // {
        //     for(int j=0; j<prm[0].size(); j++) 
        //         cout<<prm[i][j]<<" ";
        //     cout<<endl;
        // }

        int ans = getRopeLength(prm);
            
    }
}