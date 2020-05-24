#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,sum=0,prev,next=0,count=0,max_count=0,rec=0;
    cin>>n>>k;
    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<(1<<n); i++){
        count = 0; sum = 0;
        for(int j=0; j<n; j++){
            if(i&(1<<j) && sum<=k){
                count++;
                prev = next;
                next = a[j];
                if(count==1){
                }
                else{
                    sum += abs(next-prev);
                }
            }
        }
        if(count>max_count)
            max_count = count;
    }
    cout<<max_count;
}
