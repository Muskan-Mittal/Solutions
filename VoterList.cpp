#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long n,n1,n2,n3,count=0;
    long k;
    cin>>n1>>n2>>n3;
    n=n1+n2+n3;
    int v[n];
    vector<int>d;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v,v+n);
    k=v[0];
    for(int i=0; i<n; i++){
        if(v[i]==k){
            count++;
        }
        else{
            if(count>1)
                d.push_back(k);
            count=1;
            k=v[i];
        }
    }
    cout<<d.size()<<"\n";
    sort(d.begin(),d.end());
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<"\n";
    }
}
