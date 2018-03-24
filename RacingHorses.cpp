#include<iostream>
#include<algorithm>
using namespace std;
int main()
    {
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            long s[n], diff, min_diff;

            for(int i=0; i<n; i++){
                cin>>s[i];
            }
            sort(s, s+n);
            min_diff=s[1]-s[0];
            for(int i=n-1; i>0; i--){
                diff = s[i]-s[i-1];
                if(diff<min_diff){
                    min_diff = diff;
                }
            }
            cout<<min_diff<<endl;
        }
    }
