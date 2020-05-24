#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long t3, tl3, sum, n, a, d;
        cin>>t3>>tl3>>sum;
        n = 2*sum/(t3+tl3);
        d = (tl3-t3)/(n-5);
        a = t3 - 2*d;
        cout<<n<<"\n";
        for(long long i=0; i<n; i++)
            cout<<a+i*d<<" ";
        cout<<"\n";
    }
}
