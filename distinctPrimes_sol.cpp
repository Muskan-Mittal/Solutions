#include <bits/stdc++.h>
#define MAX 10000
using namespace std;
bool mark[MAX];
vector<int>prime;
void seive()
{
    for(int i=3; i<=sqrt(MAX); i+=2)
    {
        if(!mark[i]) for(int j=i*i; j<MAX; j+=i) mark[j]=true;
    }
    prime.push_back(2);
    for(int i=3; i<MAX; i+=2) if(!mark[i]) prime.push_back(i);
}
vector<int>lucky;
void factor()
{
    for(int i=10;; i++)
    {
        int n=i;
        int c=0;
        for(int j=0; prime[j]*prime[j]<n; j++)
        {
            if(n%prime[j]==0)
            {
                c++;
                while(n%prime[j]==0)
                {
                    n/=prime[j];
                }
            }
        }
        if(n!=1)c++;
        if(c>=3) lucky.push_back(i);
        if(lucky.size()==1001) break;

    }

}


int main()
{
    //  freopen("input.txt","r",stdin);
    seive();
    factor();
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",lucky[n-1]);
    }

    return 0;
}
