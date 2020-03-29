#include <iostream>
using namespace std;
int main(){
    long long n,m,a,b,c;
    cin>>n>>m>>a;
    b=n/a;
    c=m/a;
    if(n%a){
        b+=1;
    }

    if(m%a){
        c+=1;
    }
    cout<<b*c;
}
