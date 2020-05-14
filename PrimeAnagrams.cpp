#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 100001
bool isPrime[N];

void sieve()
{   

    for(ll i=0; i<N; i++)
        isPrime[i] = true;

    isPrime[0]=false;
    isPrime[1]=false;    
    for(ll i=2; i<N; i++)
    {
        if(isPrime[i]==true)
        {
            for(ll j=i*i; j<N; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}

vector <int> primes(string s)
{
    bool fl = true;
    int n = s.size();
    vector<int> res(3);
    long long mn_prod=INT_MAX, prod;

    while(fl)
    {
        while(s[0]=='0')
        {
            fl = next_permutation(s.begin(),s.end());
        }
        for(int i=1; i<n-1; i++)
        {
            if(s[i]=='0')
                continue;
            
            for(int j=i+1; j<n; j++)
            {
                if(s[j]=='0')
                    continue;

                int a=stoi(s.substr(0,i));
                int b=stoi(s.substr(i,j-i));
                int c=stoi(s.substr(j,n-j));

                if(isPrime[a] && isPrime[b] && isPrime[c])
                {
                    prod=a*b*c;
                    if(prod<=mn_prod)
                    {
                        res[0]=a; res[1]=b; res[2]=c;
                        mn_prod = prod;
                    }
                }
            }
        }

        fl = next_permutation(s.begin(),s.end());
    }

    sort(res.begin(), res.end());

    return res;
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int> v;
        sort(s.begin(), s.end());
        v = primes(s);

        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// class PrimeAnagrams{
    
//     public:
//     bool isPrime[1000001];
    
//     PrimeAnagrams()
//     {   
//         ll N = 1000001;
//         for(ll i=0; i<N; i++)
//         isPrime[i] = true;

//         isPrime[0]=false;
//         isPrime[1]=false;    
//         for(ll i=2; i<N; i++)
//         {
//             if(isPrime[i]==true)
//             {
//                 for(ll j=i*i; j<N; j+=i)
//                 {
//                     isPrime[j]=false;
//                 }
//             }
//         }
//     }
    
//      vector <int> primes(string s)
//      {
//         bool fl = true;
//         int n = s.size();
//         vector<int> res;
//         long long mn_prod=1000000000, prod;
//         while(fl)
//         {
//             while(s[0]=='0')
//             {
//                 fl = next_permutation(s.begin(),s.end());
//             }
//             for(int i=1; i<n-1; i++)
//             {
//                 if(s[i]=='0')
//                     continue;

//                 for(int j=i+1; j<n; j++)
//                 {
//                     if(s[j]=='0')
//                         continue;
//                     vector<int>tmp;
//                     int a=stoi(s.substr(0,i));
//                     int b=stoi(s.substr(i,j-i));
//                     int c=stoi(s.substr(j,n-j));
//                     tmp.push_back(a); tmp.push_back(b); tmp.push_back(c);
//                     if(isPrime[a] && isPrime[b] && isPrime[c])
//                     {
//                         prod=a*b*c;
//                         if(mn_prod>prod)
//                         {
//                             res = tmp;
//                             mn_prod = prod;
//                         }
//                     }
//                 }
//             }

//             fl = next_permutation(s.begin(),s.end());
//         }
         
//         sort(res.begin(), res.end());
//         return res; 
//      }    
// };