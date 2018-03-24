#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}
int segregate (vector<int> &arr, int size)
{
    int j = 0, i;
    for(i = 0; i < size; i++)
    {
       if (arr[i] <= 0)
       {
           swap(&arr[i], &arr[j]);
           j++;  // increment count of non-positive integers
       }
    }

    return j;
}

/* Find the smallest positive missing number in an array that contains
  all positive integers */
int findMissing(vector<int> &arr)
{
  int i, n=arr.size();
  // Mark arr[i] as visited by making arr[arr[i] - 1] negative. Note that
  // 1 is subtracted because index start from 0 and positive numbers start from 1
  for(i = 0; i < n; i++)
  {
    if(abs(arr[i]) - 1 < n && arr[abs(arr[i]) - 1] > 0)
      arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
  }

  // Return the first index value at which is positive
  for(i = 0; i < n; i++)
    if (arr[i] > 0)
      return i+1;  // 1 is added becuase indexes start from 0

  return n+1;
}

/* Find the smallest positive missing number in an array that contains
  both positive and negative integers */
int firstMissingPositive(vector<int> &A) {
    int shift = segregate (A, A.size());
    A.erase(A.begin(), A.begin()+shift);
    return findMissing(A);
}

int main(){
    static const int arr[] = {1,2,3,4,5,6,7};
    vector<int> A (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    int m= firstMissingPositive(A);
    cout<<m;
    }
