#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str="machula";
        string a="", b="", c="";
        char p, e;
        int i=0;
        cin.clear();
        cin.ignore();
        cin>>a>>p>>b>>e>>c;
        int x=0, y=0, z=0;

        if (a.find(str) != string::npos) {
            stringstream num1(b), num2(c);
            num1>>x; num2>>y;
            z=y-x;
            cout<<z<<" + "<<x<<" = "<<y<<"\n\n";
        }
        if (b.find(str) != string::npos) {
            stringstream num1(a), num2(c);
            num1>>x; num2>>y;
            z=y-x;
            cout<<x<<" + "<<z<<" = "<<y<<"\n\n";
        }
        if (c.find(str) != string::npos) {
            stringstream num1(a), num2(b);
            num1>>x; num2>>y;
            z=y+x;
            cout<<x<<" + "<<y<<" = "<<z<<"\n\n";
        }
    }
}
