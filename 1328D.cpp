#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)

int hasOneSameValue(vector<int> &a)
{
    int n=a.size(), idx=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[(i+1)%n])
        {
            idx=i; break;
        }
    }
    return idx;
}

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
        vector<int> a(n), c(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        bool fl = true;
        int val = a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]!=val)
            {
                fl = false; break;
            }
        }

        int clr;

        if(fl)
        {
            clr=1;
            for(int i=0; i<n; i++)
                c[i]=1;
        }
        else
        {
            if(n%2==0)
            {
                clr=2;
                for(int i=0; i<n; i++)
                    c[i] = i%2? 2:1;
            }
            else
            {
                int same_idx = hasOneSameValue(a);
                if(same_idx!=-1)
                {
                    clr=2;
                    int sum=3, st = (same_idx+2)%n;
                    c[same_idx]=1; c[(same_idx+1)%n]=1;

                    for(int i=0; i<n-1; i++)
                    {
                        c[st]= i%2? 1:2;
                        st=(st+1)%n;
                    }
                }
                else
                {
                    clr=3;
                    for(int i=0; i<n-1; i++)
                        c[i] = i%2? 2:1;
                    c[n-1] = 3;
                }
            }
        }

        cout<<clr<<endl;
        for(auto x:c)
            cout<<x<<" ";
        cout<<endl;
    }
}