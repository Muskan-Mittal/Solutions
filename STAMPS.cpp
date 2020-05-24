#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,p=1;
    cin>>t;
    while(t--){
        int b,f;
        cin>>b>>f;
        int m[f];
        for(int i=0; i<f; i++)
            cin>>m[i];
        sort(m,m+f);
        reverse(m,m+f);
        int k=0, sum=0;
        while(sum<b && k<f){
            sum+=m[k++];
        }
        cout<<"Scenario #"<<p<<":\n";
        p++;
        if(sum<b)
            cout<<"impossible"<<"\n";
        else
            cout<<k<<"\n";
    }   
}