#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,s,ans;
        cin>>n>>x>>s;
        int swp[10001][2];
        for(int i=0; i<s; i++){
            cin>>swp[i][0]>>swp[i][1];
        }
        ans=x;
        for(int i=0; i<s; i++){
            if(swp[i][0]==ans){
                ans=swp[i][1];
            }
            else if(swp[i][1]==ans){
                ans=swp[i][0];
            }
        }
        cout<<ans<<"\n";
    }
}
