#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<char> v;
    string str="";
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        if(str[i]=='a' || str[i]=='o' || str[i]=='y' || str[i]=='e' || str[i]=='u' || str[i]=='i'){
            continue;
        }
        else{
            v.push_back('.');
            v.push_back(str[i]);
        }
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i];
}
