#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)

const ll N=100010;

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x, a, b;
        cin>>x;
        for(int i=0; i<n; i++)
        {
            a.pb('0'); b.pb('0');
        }

        for(int i=0; i<n; i++)
        {
            if(a==b)
            {
                if(x[i]=='2')
                {
                    a[i]='1'; b[i]='1';
                }
                else if(x[i]=='0')
                {
                    a[i]='0'; b[i]='0';
                }
                else
                {
                    a[i]='1'; b[i]='0';
                }
            }
            else if(a>b)
            {
                if(x[i]=='2')
                {
                    a[i]='0'; b[i]='2';
                }
                else if(x[i]=='0')
                {
                    a[i]='0'; b[i]='0';
                }
                else
                {
                    a[i]='0'; b[i]='1';
                }
            }
        }

        cout<<a<<endl<<b<<endl;
    }
}