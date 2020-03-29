#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n], sum=0;
        for(long long i=0; i<n; i++){
            cin>>a[i];
            sum=(sum+a[i])%n;
        }
        if(sum==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
