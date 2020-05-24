#include <iostream>
using namespace std;
# define ll long long
int main(){
    int t,n,p,i,days,pi;
    cin>>t;
    ll k=0;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        p=n; i=1; days=0; pi=i-1;
        while(p>0){
            for(int j=pi; j<i; j++){
                k+=a[j];
            }
            pi=i;            
            i=k+i;
            days++;
            p=n-i;
        }
        cout<<days<<"\n";
    }
}
