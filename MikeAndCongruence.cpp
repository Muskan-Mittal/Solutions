#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,k,c,sum=0;
    cin>>n>>k;
    long r=n%k;
    long p=k-r;
    c=n/k;
    sum = c*(c-1)*p/2;
    sum+=c*(c+1)*r/2;
    cout<<sum;
}
