#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool in_array(const string &value, const vector<string> &array)
{
    return find(array.begin(), array.end(), value) != array.end();
}
int main(){
    long t, k=0;
    cin>>t;
    vector<string>chef({"chef","chfe","cehf","cefh","cfeh","cfhe","hcef","hcfe","hecf","hefc","hfec","hfce","ehcf","ehfc","echf","ecfh","efch","efhc","fhec","fhce","fehc","fech","fceh","fche"});
    while(t--){
        string s="";
        cin>>s;
        long l=s.size();
        for(long i=0; i<l-3; i++){
            string sub = s.substr(i,4);
            bool flag=in_array(sub, chef);
            if(flag){
                k++;
            }
        }
        if(k){
            cout<<"lovely "<<k<<"\n";
        }
        else{
            cout<<"normal\n";
        }
        k=0;
    }
}

