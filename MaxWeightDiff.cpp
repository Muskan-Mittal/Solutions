#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,b;
        cin>>n>>k;
        long w[n], man=0, son=0;
        for(int i=0; i<n; i++)
            cin>>w[i];
        if(k<(n-k))
            b=k;
        else
            b=n-k;
        sort(w,w+n);
        for(int i=0; i<n; i++){
            if(b>0){
                son+=w[i];
                b--;
            }
            else
                man+=w[i];
        }
        cout<<(man-son)<<"\n";
    }
}
