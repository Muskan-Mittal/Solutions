#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s="";
        
        if(n<333)
            s="333";
        else{
            s=to_string(n);
            long long k=count(s.begin(), s.end(), '3');
            
            if(k>3){
                n+=1;
                s=to_string(n);
            }
            else if(k==3){
                if(n%1000==333)
                    n+=1000;
                else if(n%100==33)
                    n+=300;
                else if(n%1000==330)
                    n+=3;
                else if(n%1000==303)
                    n+=30;
                s=to_string(n);
            }
            else{
                if((n%1000)>333){
                    
                    n+=1000;
                    s=to_string(n);
                    
                }
                k=count(s.begin(), s.end(), '3');
                reverse(s.begin(), s.end());
                int i=0;
                long long p=3-k;
                while(p!=0 && i<s.length()){
                    
                    if((s[i]-48)!=3){

                        s[i]='3'; p--;
                    }
                    i++;
                }
                reverse(s.begin(), s.end());
            }
        }
        for(long long i=0; i<s.length(); i++)
            cout<<s[i];
        cout<<"\n";

    }
}
