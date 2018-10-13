#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t,k,n,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long s[n];
        for(int i=0; i<n; i++)
            cin>>s[i];
        sort(s, s+n, greater<int>());
        
        ans = k;
        for(int i=k; i<n; i++){
            if(s[i]==s[k-1])
                ans++;
            else
                break;
        }
        cout<<ans<<"\n";
    }
}
