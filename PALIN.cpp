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

bool allNines(string s)
{
    bool fl=true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='9')
            return false;
    }
    return true;
}

string add(string s, int x)
{
    reverse(s.begin(), s.end());
    int num, cy=0, n=s.size();
    for(int i=0; i<n; i++)
    {
        num = s[i]-'0';
        if(i==0)
            num = num+cy+x;
        else
            num = num+cy;
        s[i] = (num%10)+'0';
        cy = num/10;
    }
    if(cy)
        s.pb(cy+'0');
    reverse(s.begin(), s.end());
    return s;
}

string getForOdd(string s)
{
    ll n=s.size(), mid=n/2;
    string org = s, first_half = s.substr(0,mid), last_half = s.substr(0,mid), ans;
    reverse(last_half.begin(), last_half.end());
    ll k=0;
    for(int i=mid+1; i<n; i++)
    {
        s[i] = last_half[k++];
    }

    if(s>org)
    {
        ans = s;
    }
    else if(s[mid]<'9')
    {
        s[mid]+=1;
        ans = s;
    }
    else
    {
        s[mid]=0+'0';
        string newfirst = add(first_half,1);
        string newlast = newfirst;
        reverse(newlast.begin(), newlast.end());
        string res = newfirst+s[mid]+newlast;
        if(res>org)
            ans = res;
    }

    return ans;
}

string getForEven(string s)
{
    ll n=s.size(), mid=n/2;
    string org = s, first_half = s.substr(0,mid), last_half = s.substr(0,mid), ans;
    reverse(last_half.begin(), last_half.end());
    ll k=0;
    //cout<<first_half<<endl;
    for(int i=mid; i<n; i++)
    {
        s[i] = last_half[k++];
    }
    //cout<<"s:"<<s<<endl;
    if(s>org)
    {
        ans = s;
    }
    else
    {
        string newfirst = add(first_half,1);
        string newlast = newfirst;
        reverse(newlast.begin(), newlast.end());
        string res = newfirst+newlast;
        ans = res;
    }

    return ans;
}

int main()
{
    //ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s, ans;
        cin>>s;
        ll n=s.size();

        if(allNines(s))
        {
            ans = add(s,2);
        }
        else if(n%2)
        {
            ans = getForOdd(s);
        }
        else
        {
            ans = getForEven(s);
        }
        cout<<ans<<endl;
    }
}