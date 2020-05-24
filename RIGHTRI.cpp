#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long n,count=0;
    cin>>n;
    while(n--){
        long x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        float d1,d2,d3;
        d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        d2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
        d3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
        if(d1==d2+d3){
            count++;
        }else if(d2==d1+d3){
            count++;
        }
        else if(d3==d1+d2)
            count++;
    }
    cout<<count;
}
