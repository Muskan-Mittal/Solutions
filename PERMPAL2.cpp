#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int ans[n];
        vector<vector<int> > v;
        for(int i=0;i<26;i++)
        {
            vector<int> vec;
            vec.push_back(0);
            v.push_back(vec);
        }
        for(int i=0; i<n; i++)
        {
            v[s[i]-'a'][0]++;
            v[s[i]-'a'].push_back(i+1);
        }
        int index=-1,x=0;
        for(int i=0;i<26;i++)
        {
            if(v[i][0]%2!=0)
            {
                x++;
                index=i;
            }
        }
        if(x>1)
            cout<<-1<<endl;
        else
        {
            if(n%2==0)
            {
            int k=n/2-1,j=n/2;
                for(int i=0;i<26;i++)
                {
                    for(int l=1;l<=v[i][0];l=l+2)
                    {
                        ans[k--]=v[i][l];
                        ans[j++]=v[i][l+1];
                    }
                }

            }
            else
            {
                ans[n/2]=v[index][v[index][0]];
                v[index][0]--;
                int k=n/2-1,j=n/2+1;
                for(int i=0;i<26;i++)
                {
                    for(int l=1;l<=v[i][0];l=l+2)
                    {
                        ans[k--]=v[i][l];
                        ans[j++]=v[i][l+1];
                    }
                }

            }
            for(int i=0;i<n;i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }

    }
    return 0;
}
