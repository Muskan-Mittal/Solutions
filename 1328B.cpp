#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007

const ll N=70000;

vector<ll> sum(N);

void precomputeSums()
{
    sum[0] = 0; sum[1]=1; 
    for (ll i = 2; i < N; i++) 
        sum[i] = i*(i+1)/2; 
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precomputeSums();
    int t;
    cin>>t;
    
    // for(int i=0; i<200; i++)
    //     cout<<sum[i]<<" ";
    //cout<<endl;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s, res;
        for(int i=0; i<n-2; i++)
        {
            s.push_back('a');
            res.push_back('a');
        }
        s.push_back('b'); s.push_back('b');
        res.push_back('a'); res.push_back('a');
        //cout<<res<<" "<<s<<endl;
        ll idx = lower_bound(sum.begin(), sum.end(), k)-sum.begin();
        //cout<<idx<<endl;
        ll b1=0,b2=0;
        if(idx>=1)
            b1 = k-sum[idx-1];
        b2 = idx+1;
        res[n-b1]='b';
        res[n-b2]='b';
        cout<<res<<endl;
    }
}