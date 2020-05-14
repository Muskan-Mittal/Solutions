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
        int n, m;
        cin>>n>>m;
        vector<int> a(m);
        unordered_map<int,vector<int> >mp;
        for(int i=0; i<m; i++)
        {
            cin>>a[i];
            mp[a[i]].pb(i);
        }

        set<int> st;
        int clean=0;
        for (int i=0; i<m; i++)
        {
            if(st.find(a[i])!=st.end())
            {
                continue;
            }
            else if(st.size()<n)
            {
                st.insert(a[i]);
                clean++;
            }
            else
            {
                bool fl=false;
                int key; int max_time=0;
                for(auto it=st.begin(); it!=st.end(); it++)
                {
                    int idx = lower_bound(mp[*it].begin(), mp[*it].end(), i)-mp[*it].begin();
                    if(idx==mp[*it].size())
                    {
                        fl=true;
                        st.erase(*it);
                        clean++;
                        st.insert(a[i]);
                        break;
                    }
                    else
                    {
                        if(mp[*it][idx]>max_time)
                        {
                            max_time = mp[*it][idx];
                            key = *it;
                        }
                    }
                }
                if(!fl)
                {
                    st.erase(key);
                    clean++;
                    st.insert(a[i]);
                }
            }
        }
        cout<<clean<<endl;
    }
}