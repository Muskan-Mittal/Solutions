#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long m,n;
        cin>>m>>n;
        int a[n+1]={0};
        a[0]=1; a[1]=1;
        for(int i=2; i<sqrt(n); i++){
            if(a[i]==0){
                for(int j=2; i*j<=n; j++)
                    a[i*j]=1;
            }
        }

        for(int i=m; i<=n; i++){
            if(a[i]==0)
                cout<<i<<"\n";
        }
        cout<<"\n";
    }
}
