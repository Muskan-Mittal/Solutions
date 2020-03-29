#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long a[200001];
        long n,k=0;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j])
                    k++;
            }
        }
        cout<<k<<"\n";
    }
}
