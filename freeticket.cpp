#include<iostream>
#define FOR(i,l,n) for(int i=l; i<n; i++)
using namespace std;
int main()
    {
       int c,f,x,y,p,max_cost;
       cin>>c>>f;
       int cost[c][c];

       FOR(i,0,c){
        FOR(j,0,c){
            cost[i][j]=-1;
        }
       }

       FOR(i,0,f){
        cin>>x>>y>>p;
        cost[x-1][y-1]=p;
        cost[y-1][x-1]=p;
       }

       FOR(k,0,c){
        FOR(i,0,c){
            FOR(j,0,c){
                if(cost[i][k]!=-1 && cost[k][j]!=-1 && i!=j){
                    if(cost[i][j]==-1 || cost[i][k]+cost[k][j]<cost[i][j]){
                        cost[i][j]=cost[i][k]+cost[k][j];
                    }
                }
            }
        }
       }

       max_cost = cost[0][0];

       FOR(i,0,c){
        FOR(j,0,c){
            if(cost[i][j]>max_cost)
            max_cost=cost[i][j];
        }
       }

       cout<<max_cost;

    }
