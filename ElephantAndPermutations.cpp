#include<iostream>
#include<algorithm>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,sum_loc=0, sum_inv=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                    sum_loc++;
                }
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j] && j>i){
                    sum_inv++;
                }
            }
        }
        if(sum_inv==sum_loc)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}

