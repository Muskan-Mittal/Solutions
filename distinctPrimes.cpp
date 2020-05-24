#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 18001
#define LIMIT 601
vector<int>* distinctThreePrimes(){
    bool isPrime[LIMIT];
    memset(isPrime, true, sizeof(isPrime));
    for(int i=2; i<LIMIT; i++){
        if(isPrime[i]==true){
            for(int j=2*i; j<LIMIT; j+=i)
                isPrime[j]=false;
        }
    }
    vector<int> primes;
    primes.push_back(2);
    for(int i=3; i<LIMIT; i+=2){
        if(isPrime[i]==true){
            primes.push_back(i);
        }
    }

    int k=0;
    vector<int>* disprimes = new vector<int>();
    disprimes->push_back(30);
    disprimes->push_back(42);
    for(int i=43; i<MAX; i++){
        k=0;
        for(int j=0; j<primes.size(); j++){
            if(i%primes[j]==0){
                k++;
            }
            if(k==3){
                disprimes->push_back(i);
                break;
            }
        }
    }
    return disprimes;
}
int main(){
    vector<int>*distinct = distinctThreePrimes();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<distinct->at(n-1)<<"\n";
    }
}
