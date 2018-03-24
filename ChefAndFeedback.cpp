#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.find("101")!=-1 || s.find("010")!=-1){
            cout<<"Good\n";
        }
        else
            cout<<"Bad\n";
    }
}
