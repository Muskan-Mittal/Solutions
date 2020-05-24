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
        string s;
        cin>>s;
        int n=s.size();
        for(int i=n-4; i>=0; i--)
        {
            if(s[i]=='?' || s[i]=='C')
            {
                if(s[i+1]=='?' || s[i+1]=='H')
                {
                    if(s[i+2]=='?' || s[i+2]=='E')
                    {
                        if(s[i+3]=='?' || s[i+3]=='F')
                        {
                            s[i]='C';
                            s[i+1]='H';
                            s[i+2]='E';
                            s[i+3]='F';
                        }
                    }
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            if(s[i]=='?')
                s[i]='A';
        }

        cout<<s<<endl;
        
    }
}