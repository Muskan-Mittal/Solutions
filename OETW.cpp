#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,ones=0, sum=0;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==1)
                ones++;
        }
        if(ones!=0){
            if(a[0]==2 && a[n-1]==2)
                cout<<sum-1;
            else
                cout<<sum;
        }
        else
            cout<<sum/2;
        cout<<"\n";
    }
}
