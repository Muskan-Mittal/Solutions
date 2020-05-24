#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long a[n];
        string ans="";
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]<=k){
                ans+="1";
                k-=a[i];
            }
            else{
                ans+="0";
            }
        }
        cout<<ans<<"\n";
    }
}
