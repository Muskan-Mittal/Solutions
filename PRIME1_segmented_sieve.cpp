#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 100001

vector<int>* sieve(){
    bool isPrime[MAX];
    memset(isPrime, true, sizeof(isPrime));
    for(int i=2; i<MAX; i++){
            if(isPrime[i]==true){
                for(int j=2*i; j<MAX; j+=i)
                    isPrime[j]=false;
            }
        }
    vector<int>* primes = new vector<int>();
    primes->push_back(2);
    for(int i=3; i<MAX; i+=2){
        if(isPrime[i]==true){
            primes->push_back(i);
        }
    }
    return primes;
}

void printPrimes(long long l, long long r, vector<int>* &primes){
    bool isPrime[r+1];
    memset(isPrime, true, sizeof(isPrime));
    for(int i=0; primes->at(i)*primes->at(i)<=r; i++){
        int curPrime=primes->at(i);
        long long base=(l/curPrime)*curPrime;
        if(base<l){
            base+=curPrime;
        }
        for(long long j=base; j<=r; j+=curPrime){
            isPrime[j]=false;
        }
        if(base==curPrime){
            isPrime[base]=true;
        }
        isPrime[1]=false;
    }
    for(int i=l; i<=r; i++){
            if(isPrime[i]==true){
                cout<<(i)<<"\n";
            }
    }
}

int main(){
    vector<int>* prime = sieve();
    int t;
    cin>>t;
    while(t--){
        long long m,n;
        cin>>m>>n;
        printPrimes(m,n,prime);
        cout<<"\n";
    }
}
