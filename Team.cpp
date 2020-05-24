#include <iostream>
using namespace std;
int main() {
    int n,k=0;
    cin>>n;
    while(n--){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        if(a1&&a2 || a2&&a3 || a1&&a3){
            k++;
        }
    }
    cout<<k;
}
