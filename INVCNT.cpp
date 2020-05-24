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

ll merge(vector<ll>&a, int st, int mid, int ed, vector<ll> &v)
{
    int i=st, j=mid+1, k=st;
    ll inv=0;

    while(i<=mid && j<=ed)
    {
        if(a[i]<=a[j])
            v[k++]=a[i++];
        else
        {
            v[k++]=a[j++];
            inv+=mid-i+1;
        }
    }

    while(i<=mid)
    {
        v[k++]=a[i++];
    }

    while(j<=ed)
    {
        v[k++]=a[j++];
    }

    for(int i=st; i<=ed; i++)
    {
        a[i]=v[i];
    }
    return inv;
}

ll _mergesort(vector<ll> &a, int st, int ed, vector<ll> &v)
{
    ll inv=0;
    if(st<ed)
    {
        int mid = st+(ed-st)/2;
        inv = _mergesort(a,st,mid,v);
        inv += _mergesort(a,mid+1,ed,v);
        inv += merge(a,st,mid,ed,v);
    }

    return inv;
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n), v(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll inv = _mergesort(a,0,n-1,v);
        cout<<inv<<endl;
    }
}