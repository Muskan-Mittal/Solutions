#include<iostream>
using namespace std;
int main(){
    while(1){
        float c,i=2.0,sum=0;
        int cards=0;
        cin.clear();
        cin>>c;
        if(c==0.00){
            break;
        }
        while(c>sum){
            sum+=(1/i);
            i++;
            cards++;
        }
        cout<<cards<<" card(s)\n";
    }
}
