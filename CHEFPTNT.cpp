#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        long n,x,k,ev=0,od=0,pd=0;
        cin>>n>>m>>x>>k;
        string s="";
        cin>>s;
        if(k>=n){
            for(long i=0; i<s.size(); i++){
            if(s[i]=='E'){
                ev++;
            }
            else
                od++;
        }

        if(m%2){
            if((m/2+1)*x>od)
                pd+=od;
            else
                pd+=(m/2+1)*x;
            if((m/2)*x>ev)
                pd+=ev;
            else
                pd+=(m/2)*x;
        }
        else{
            if((m/2)*x>od)
                pd+=od;
            else
                pd+=(m/2)*x;
            if((m/2)*x>ev)
                pd+=ev;
            else
                pd+=(m/2)*x;
        }
        if(pd>=n)
            cout<<"yes\n";
        else
            cout<<"no\n";
        }
        else
            cout<<"no\n";
    }
}
