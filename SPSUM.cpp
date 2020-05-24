#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,sum,sum1=0,sum2=0;
        bool flag=true;
        cin>>n>>m;
        sum=n*(n+1)/2;
        for(int i=1;i<=(1<<n);i++){
            for(int j=1;j<=n;j++){
                if(((1<<j)&i)){
                    sum1+=j;
                }
            }
            sum2=sum-sum1;
            if(abs(sum2-sum1)==m && __gcd(sum1, sum2)==1){
                cout<<"Yes\n"; flag=false;
                break;
            }
        }
        if(flag)
            cout<<"No\n";
    }
}
