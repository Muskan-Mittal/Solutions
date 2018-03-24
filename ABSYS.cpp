#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str="machula";
        string
        int i=0;
        cin.clear();
        cin.ignore();
        getline(cin,str);
        string delimiter1=" + ";
        string a = str.substr(0, str.find(delimiter1));
        string delimiter2=" = ";
        str.erase(0, str.find(delimiter1)+delimiter1.length());
        string b = str.substr(0, str.find(delimiter2));
        string c = str.substr(str.find(delimiter2)+3);

        int x=0, y=0, z=0;
        if (a.find("machula") != string::npos) {
            stringstream num1(b), num2(c);
            num1>>x; num2>>y;
            z=y-x;
            cout<<z<<" + "<<x<<" = "<<y<<"\n\n";
        }
        if (b.find("machula") != string::npos) {
            stringstream num1(a), num2(c);
            num1>>x; num2>>y;
            z=y-x;
            cout<<x<<" + "<<z<<" = "<<y<<"\n\n";
        }
        if (c.find("machula") != string::npos) {
            stringstream num1(a), num2(b);
            num1>>x; num2>>y;
            z=y+x;
            cout<<x<<" + "<<y<<" = "<<z<<"\n\n";
        }
    }
}
