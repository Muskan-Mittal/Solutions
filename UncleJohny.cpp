#include<iostream>
#include<algorithm>
using namespace std;
long binarySearch(long arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);
        else
            return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}
int main()
    {
        int t,k,n;
        long reqd,pos;
        cin>>t;
        while(t--){
            cin>>n;
            long a[n];
            for(int i=0; i<n; i++){
                cin>>a[i];
            }

            cin>>k;
            reqd = a[k-1];
            sort(a,a+n);
            pos = binarySearch(a,0,n-1,reqd);
            cout<<(pos+1)<<endl;
        }
    }
