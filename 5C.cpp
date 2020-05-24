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
    int cnt=0, n=s.size();
    stack<int> stk;
    stk.push(-1);
    int maxl=0, len=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
        {
            stk.push(i);
        }
        else
        {
            stk.pop();
            if(!stk.empty())
            {
                int tmp = i-stk.top(); 
                if(maxl==tmp)
                {
                    cnt++;
                }
                else if(tmp>maxl)
                {
                    cnt=1;
                    maxl = tmp;
                }

            }
            else
            {
                stk.push(i);
            }
        }
    }

    if(cnt!=0)
        cout<<maxl<<" "<<cnt<<endl;
    else
        cout<<"0 1\n";
}