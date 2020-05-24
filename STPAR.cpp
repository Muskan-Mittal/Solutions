#include <iostream>
#include <queue>
#include <stack>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n;
        queue<int>q;
        stack<int>s;
        for(int i=0; i<n; i++){
            cin>>c;
            q.push(c);
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(x>q.front()){
                s.push(x);
            }
            while(!s.empty()){
                if(s.top()<x)
                    s.pop();
            }
        }

        if(s.empty())
            cout<<"yes\n";
        else
            cout<<"no\n";

    }
}