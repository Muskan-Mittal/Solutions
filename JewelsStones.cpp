#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string j,s;
        cin>>j>>s;
        int arr[125]={0},lj,ls,k=0;
        lj=j.length();
        ls=s.length();
        for(int i=0; i<lj; i++){
            arr[j[i]]=1;
        }
        for(int i=0; i<ls; i++){
            if(arr[s[i]])
                k++;
        }
        cout<<k<<endl;
    }
}
