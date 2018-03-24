#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
    {
        long n,k=0,l=-1;
        cin>>n;
        long arr[n];

        for(long i=0; i<n; i++){
            cin>>arr[i];
        }

        for (long i = 0; i < n; i++){
            if(arr[i]==0){
                l++;
            }
            if (arr[abs(arr[i])] > 0)
                arr[abs(arr[i])] = -arr[abs(arr[i])];
            else
                k++;
  }
        cout<<k+l;
    }
