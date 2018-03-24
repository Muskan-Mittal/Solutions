#include<iostream>
#include<algorithm>
using namespace std;
int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            int n,x,sum=0,k=0;
            cin>>n>>x;
            int m[n];
            for(int i=0; i<n; i++){
                cin>>m[i];
                sum+=m[i];
            }
            sort(m, m+n);
            int d=sum%x;
            k=sum/x;
            if(m[0]<=d)
                cout<<-1<<endl;
            else
                cout<<k<<endl;
        }
    }
