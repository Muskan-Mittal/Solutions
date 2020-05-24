#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,x,y,p=1,k=1,r,s;
        bool fp=false, fk=false;
        cin>>n>>m>>x>>y;
        if(!fk){
            r=(n-1)/x;
            k+=r*x;
        }
        if(!fp){
            s=(m-1)/y;
            p+=s*y;
        }
        if(k==n)
            fk=true;
        if(p==m)
            fp=true;
        if(!fk && !fp){
            if((n-k)==1 && (m-p)==1){
                fk=true; fp=true;
            }
        }
        if(x==1 && n!=1 && (!fk || !fp)){
            if((m-p)==1)
                fp=true;
        }
        if(y==1 && m!=1 && (!fk || !fp)){
            if((n-k)==1)
                fk=true;
        }
        //cout<<"fp "<<fp<<", fk "<<fk<<"  "<<"p: "<<p<<", k: "<<k;
        if(fp && fk)
            cout<<"Chefirnemo\n";
        else
            cout<<"Pofik\n";
    }
}
