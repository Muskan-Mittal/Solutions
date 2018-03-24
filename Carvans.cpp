#include<iostream>
using namespace std;
int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t,n,k,tp;
        cin>>t;
        while(t--){
            k=1; tp=0;
            cin>>n;
            int s[n];
            for(int i=0; i<n; i++){
                cin>>s[i];
            }
            tp = s[0];
            for(int i=1; i<n; i++){
                if(s[i]<tp){
                    k++;
                    tp = s[i];
                }
            }
            cout<<k<<endl;
        }
    }
