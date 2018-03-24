#include<iostream>
using namespace std;

int main()
    {
        int t,g,i,q;
        long n,k=0;

        cin>>t;
        while(t--){
            cin>>g;

            while(g--){
                cin>>i>>n>>q;
                if(n%2==0)
                    k=n/2;
                else{
                    if(i==1){
                        if(q==1){
                            k=n/2;
                        }
                        else
                            k=n/2+1;
                    }
                    else{
                        if(q==1){
                            k=n/2+1;
                        }
                        else
                            k=n/2;
                    }
                }
            cout<<k<<endl;
            }
        }
    }
