#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n+1];
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
    long long x, f, r=0;
    cin>>x>>f;
    for(long long i=0; i<n; i++){
        if(a[i]>x){
            r+=a[i]/(x+f);
            if(a[i]%(x+f)>x)
                r++;
        }
    }
    cout<<r*f;
}
