#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,s;
        cin>>p>>s;
        double v,h1,h2,v1,v2;
        h1=(p-sqrt(p*p-24*s))/12;
        h2=(p+sqrt(p*p-24*s))/12;
        v1=(s/2-(p/4-h1)*h1)*h1;
        v2=(s/2-(p/4-h2)*h2)*h2;
        v=v1;
        if(v1<v2)
            v=v2;
        printf("%0.2f\n",v);
    }
}
