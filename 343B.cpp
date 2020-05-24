#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    bool fl = false;
    stack<char>stk;

    for(int i=0; i<n; i++)
    {
        if(stk.empty())
        {
            stk.push(s[i]);
        }
        else
        {
            if(stk.top()==s[i])
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }

    if(stk.empty())
        cout<<"Yes\n";
    else
        cout<<"No\n";
}