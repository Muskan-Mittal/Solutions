#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
//#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);

bool isSorted(vector<int>&a, int st, int ed)
{
    for(int i=st+1; i<=ed; i++)
    {
        if(a[i]<a[i-1])
            return false;
    }
    return true;
}

int findLen(vector<int>&v, int st, int ed)
{
    if(ed<st)
        return 1;
    //cout<<"st,ed: "<<st<<","<<ed<<endl;
    if(isSorted(v, st, ed))
        return ed-st+1;
    int mid = st+(ed-st)/2;
    return max(findLen(v, st, mid), findLen(v, mid+1, ed));
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int l = findLen(v,0,n-1);
    cout<<l<<endl;
}