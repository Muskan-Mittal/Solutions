#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,b[1010][1010];
        char a[1010][1010];
        bool flag=false;
        memset(b,-1,sizeof(b));
        cin>>n>>m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin>>a[i][j];
        }
        int u,v;
        for(u=0; u<n; u++){
            for(v=0; v<m; v++){
                if(a[u][v]=='1')
                    break;
            }
        }
        if(u==n && v==m)
            flag=true;

        if(!flag){

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(a[i][j]=='1'){
                        for(int p=0;p<m;p++){
                                b[i][p]=1;
                        }
                        for(int q=0;q<n;q++){
                                b[q][j] = 1;
                        }
                    }
                }
            }


            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(a[i][j]=='1')
                        b[i][j]=0;
                    if(b[i][j]==-1){
                        b[i][j]=2;
                    }
                }
            }


            }
            cout<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++)
                    cout<<b[i][j]<<" ";
                cout<<endl;
            }
        }
    }