#include <iostream>
using namespace std;
int main() {
    int m,n,ans,p,q;
    cin>>m>>n;
    if(m%2==0 && n%2==0){
        ans = m*n/2;
    }
    else{
        if(m%2){
            p=m, q=n;
        }
        else{
            p=n, q=m;
        }
        p=p-1;
        ans = p*q/2;
        ans += q/2;
    }
    cout<<ans;
}
