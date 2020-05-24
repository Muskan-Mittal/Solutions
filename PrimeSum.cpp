#include<iostream>
#include<bits/stdc++.h>
#define MAX 100001
using namespace std;
vector<int> Solution::primesum(int A) {
bool isPrime[MAX];
    memset(isPrime, true, sizeof(isPrime));
    for(int i=2; i<MAX; i++){
            if(isPrime[i]==true){
                for(int j=2*i; j<MAX; j+=i)
                    isPrime[j]=false;
            }
        }
    vector<int>v;
    for(int i=2; i<A; i++){
        if(isPrime[i] && isPrime[A-i]){
            v.push_back(i); v.push_back(A-i);
            break;
        }
    }
    return v;
}
