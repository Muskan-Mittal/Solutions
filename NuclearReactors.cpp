#include<iostream>
using namespace std;
int main()
    {
        long a;
        int n,k;
        cin>>a>>n>>k;
        int b[k];
        for (int i=0; i<k; i++){
            b[i] = a%(n+1);
            a/=(n+1);
        }
        for(int i=0; i<k; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
