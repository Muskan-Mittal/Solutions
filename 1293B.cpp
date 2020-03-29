#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    double ans = 0.0;
    for(int i=1; i<=n; i++)
    {
        ans += (double) 1/ (double)i;
    }

    cout<<fixed<<setprecision(12)<<ans<<endl;
}