#include<iostream>
using namespace std;
int main()
    {
        int a,b,diff,p;
        cin>>a>>b;
        diff = a-b;

        p = diff%10;
        diff/=10;
        if(p!=9){
            p+=1;
        }
        else
        {
            p-=1;
        }

        diff = diff*10+p;

        cout<<diff;
    }
