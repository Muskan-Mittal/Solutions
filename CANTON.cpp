#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i=1,j=1,k=1;
        cin>>n;
        while(n>k){
            j++; k++;
            while(j!=1){
                if(k==n)
                    break;
                i++; j--; k++;
            }
            if(k==n)
                break;
            i++; k++;
            while(i!=1){
                if(k==n)
                    break;
                i--; j++; k++;
            }
            if(k==n)
                break;
        }
        cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<"\n";
    }
}
