#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s,ans="";
        cin>>s;
        int l=s.length();
        if(l>10)
            cout<<s[0]<<l-2<<s[l-1]<<"\n";
        else
            cout<<s<<"\n";
    }
}
