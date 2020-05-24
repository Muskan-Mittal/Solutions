#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 1000001

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n==1 || n==2)
        {
            cout<<1<<endl;
            if(n==1)
                cout<<"1 1\n";
            else
                cout<<"2 1 2\n";
            continue;
        }

        cout<<n/2<<"\n";

        if(n%2)
        {
            cout<<3<<" "<<1<<" "<<2<<" "<<n<<"\n";
        }
        else
        {
            cout<<2<<" "<<1<<" "<<2<<"\n";
        }
        
        for(int i=4; i<=n; i+=2)
        {
            cout<<2<<" "<<i-1<<" "<<i<<"\n";
        }
    }
}