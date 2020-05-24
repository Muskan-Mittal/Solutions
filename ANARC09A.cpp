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
    ll t=0;
    while(1)
    {
        string s;
        cin>>s;

        if(s[0]=='-')
            break;
        t++;
        stack<int> stk;
        int cnt=0, n = s.size();

        for(int i=0; i<n; i++)
        {
            if(s[i]=='{')
            {
                stk.push(i);
            }
            else
            {
                if(stk.empty())
                {
                    cnt++;
                    stk.push(i);
                }
                else
                    stk.pop();
            }
        }

        if(!stk.empty())
        {
            int sz = stk.size();
            //cout<<"size:"<<sz<<" ";
            cnt+=sz/2;
        }

        cout<<t<<". "<<cnt<<endl;
        
    }
}