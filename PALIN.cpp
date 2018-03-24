#include<iostream>
using namespace std;
bool checkPalin(string n){
    bool flag=true;
    long len=n.size();
    for(long i=0; i<len/2; i++){
        if(n[i]!=n[len-1-i]){
            flag=false;
            break;
        }
    }
    return flag;
}
int main(){
    long t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        long len=n.size();
        bool flag=checkPalin(n);
        if(flag && len%2){
            int mid=n[len/2]++;
            n[len/2]=mid;
        }
        cout<<n;
    }
}
