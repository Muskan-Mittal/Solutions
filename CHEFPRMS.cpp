#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int sp[56] = {6, 10, 14, 15, 21, 22, 26, 33, 34, 35, 38, 39, 46, 51, 55, 57, 58, 62, 65, 69, 74, 77, 82, 85, 86, 87, 91, 93, 94, 95, 106, 111, 115, 118, 119, 122, 123, 129, 133, 134, 141, 142, 143, 145, 146, 155, 158, 159, 161, 166, 177, 178, 183, 185, 187, 194};
    unordered_set<int> s;
    for (int i=0; i<56; i++){
        s.insert(sp[i]);
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int rem;
        bool flag = false;
        for(int i=0; i<56; i++){
            rem = n-sp[i];
            if(s.find(rem) != s.end()){
                //cout<<"Rem: "<<rem<<"\n";
                flag = true; break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
