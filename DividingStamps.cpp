#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    long c[n];
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>c[i]; sum+=c[i];
    }
    double f=sqrt(1+8*sum);
    long d=f;
    float rem=f-d;
    if(rem==0){
        if(d%2!=0)
            cout<<"YES";
    }
    else
        cout<<"NO";
}
