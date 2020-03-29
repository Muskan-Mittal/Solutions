#include<iostream>
#include<algorithm>
#include <list>
#include <iterator>
using namespace std;
int main(){
    int t,n,p,no;
    cin>>t;
    while(t--){
        cin>>n;
        p=n;
        list<int>num;
        list<int>::iterator it1,it2;
        for(int i=0; i<n; i++){
            cin>>no;
            num.push_back(no);
        }
        num.sort();
        it1=it2=num.begin(); it2++;
        for(int i=0; i<n; i++){
            while(it2!=num.end()){
            if(*it1%(*it2)==0){
                num.erase(it2);
                continue;
            }
            it2++;
        }
        it1++; it2=it1; it2++;
        }

        for (it1=num.begin(); it1!=num.end(); ++it1){
            cout << ' ' << *it1;
        }
    }
}
