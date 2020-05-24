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
    string s,u;
    cin>>s;
    stack<char> t;
    vector<char> lm;
    int n = s.size();

    for(int i=0; i<n; i++) lm.pb('a');

    lm[n-1] = s[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(s[i]<lm[i+1])
            lm[i] = s[i];
        else
            lm[i] = lm[i+1];
    }

    int j=0;
    for(int i=0; i<n; i++)
    {
        //cout<<mp[i]<<" ";
        while(!t.empty() && t.top()<=lm[i])
        {
            char tp = t.top(); t.pop();
            u.pb(tp);
        }

        t.push(s[i]);
    }

    while(!t.empty())
    {
        char tp = t.top(); t.pop();
        u.pb(tp);
    }
    cout<<u<<endl;
}