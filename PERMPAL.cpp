#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0,index=-1;
        int ans[n]={0};
        vector<vector<int> >v;
        string s="";
        cin>>s;
        n=s.size();
        for(int i=0; i<26; i++){
            vector<int>vec;
            vec.push_back(0);
            v.push_back(vec);
        }
        for(int i=0; i<n; i++){
            v[s[i]-'a'][0]++;
            v[s[i]-'a'].push_back(i+1);
        }
        for(int i=0; i<26; i++){
            if(v[i][0]%2!=0){
                k++;
                index=i;
            }
        }
        if(k>1)
            cout<<-1<<"\n";
        else{
            if(n%2){
                ans[n/2]=v[index][v[index][0]];
                v[index][0]--;
                int p=n/2-1, j=n/2+1;
                for(int i=0;i<26;i++)
                {
                    for(int l=1;l<=v[i][0];l=l+2)
                    {
                        ans[p--]=v[i][l];
                        ans[j++]=v[i][l+1];
                    }
                }
            }
            else{
               int p=n/2-1, j=n/2;
                for(int i=0;i<26;i++)
                {
                    for(int l=1;l<=v[i][0];l=l+2)
                    {
                        ans[p--]=v[i][l];
                        ans[j++]=v[i][l+1];
                    }
                }
            }
        }
        for(int i=0; ans[i]; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}
