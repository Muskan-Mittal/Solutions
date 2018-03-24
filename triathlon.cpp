#include<iostream>
using namespace std;
#define For(i,l,n) for(long i=l; i<n; i++)
/*int main()
    {
        long long n, min_time;
        cin>>n;
        long long time[n][3], tot_time[n], sum1=0;

        For(i,0,n){
            For(j,0,3){
                cin>>time[i][j];
            }
            sum1+=time[i][0];
        }

        For(i,0,n){
            tot_time[i]=0;
            For(j,1,3){
                tot_time[i]+=time[i][j];
            }
        }

        min_time = tot_time[0];
        For(i,0,n){
            if(min_time>tot_time[i])
            min_time = tot_time[i];
        }

        cout<<min_time+sum1;
    }
*/

#include<vector>
#include<algorithm>
int main()
    {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<pair<long, long> > time;
        long long n, max_t, a,b,c,sum1=0, sum2=0;
        cin>>n;

        For(i,0,n){
            cin>>a>>b>>c;
            time.push_back(make_pair(b+c, a));
            sum1+=a;
        }

        sort(time.begin(), time.end());
        max_t = sum1+time[0].first;

        for(int i=n-1; i>=0; i--){
            sum2+=time[i].second;
            if(time[i].first+sum2>max_t){
                max_t = time[i].first+sum2;
            }
        }
        cout<<max_t;

    }

