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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll spend=0, curr=n, get=0;
        
        while(curr>9)
        {
            spend+=(curr/10)*10;
            curr=(curr/10)+(curr%10);
        }

        spend+=curr;
        cout<<spend<<endl;
    }
}