#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long p,n;
        int a=192, d=250;
        cin>>n;
        p=a+(n-1)*d;
        cout<<p<<"\n";
    }
}
