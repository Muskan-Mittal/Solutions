#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    while(1){
        int n;
        cin>>n;
        if(n==0)
            break;
        int a[100001];
        for(int i=0; i<n; i++)
            cin>>a[i];
        bool flag=true;
        for(int i=0; i<n; i++){
            if(a[a[i]-1]!=(i+1)){
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"ambiguous\n";
        else
            cout<<"not ambiguous\n";
    }
}