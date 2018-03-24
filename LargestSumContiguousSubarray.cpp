#include<iostream>
using namespace std;
int maxSubArraySum(int a[], int n){
    int curr=a[0], glob=a[0], st=0, s=0, ed=0;
    for(int i=1; i<n;i++){
        curr=max(a[i],a[i]+curr);
        if(glob<curr){
            glob=curr; st=s; ed=i;
        }
        if (curr < 0)
        {
            curr = 0;
            s = i + 1;
        }
    }
    cout<<st<<" "<<ed<<"\n";
    return glob;
}
int main(){
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout<<max_sum;
    return 0;
}
