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

char getChar(char clr1, char clr2, int k)
{
    int a=(clr1=='?')? -1: clr1-'0';
    int b=(clr2=='?')? -1: clr2-'0';
    //cout<<a<<" "<<b<<endl;
    for(int i=0; i<k; i++)
    {
        if(a!=i && b!=i)
            return i+'0';
    }
    return '?';
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
        int k;
        cin>>k;
        string s;
        cin>>s;
        int n=s.size();

        if(n==1)
        {
            if(s[0]=='?')
                cout<<0<<endl;
            else if(s[0]<k+'0')
                cout<<s[0]<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }

        if(n>1 && k==1)
        {
            cout<<"NO\n";
            continue;
        }

        if(k==2)
        {
            if(n%2)
            {
                cout<<"NO\n";
                continue;
            }
        }

        bool fl = true;
        for(int i=0; i<n; i++)
        {
            int l=i-1, r=i+1;
            if(l==-1) l+=n;
            if(r==n) r-=n;
            if(s[i]=='?')
            {    
                s[i] = getChar(s[l], s[r], k);

                if(s[i]=='?')
                {
                    fl = false; break;
                }
            }
            else 
            {
                if(s[l]==s[i] || s[r]==s[i] || s[i]>=k+'0')
                {
                    fl=false; break;
                }
            }
        }

        if(fl)
            cout<<s<<endl;
        else
            cout<<"NO\n";
    }
}