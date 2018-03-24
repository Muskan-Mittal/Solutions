#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
    {
        int t,m,n,d,k=0;
        stringstream ss;

        cin>>t;
        while(t--){
            string chef="", ast="";
            k=0;
            cin>>n>>m;
            int jobs[n] = {0};
            for(int i=0; i<m; i++){
                cin>>d;
                jobs[d-1] = 1;
            }

            for(int i=0; i<n; i++){
                if(jobs[i]==0){
                    ss << (i+1);
                    if(k%2==0){
                        chef += ss.str()+" ";
                        k++;
                    }
                    else{
                        ast += ss.str()+" ";
                        k++;
                    }
                    ss.str("");
                }
            }

            cout<<chef<<"\n";
            cout<<ast<<"\n";
        }
    }
