#include<iostream>
#include<cstring>
#include<stack>
#include<ctype.h>
using namespace std;
int precedence(char op1){
    int p;
    switch(op1){
        case '%':
            p=4; break;
        case '/': case '*':
            p=3; break;
        case '+': case '-':
            p=2; break;
    }
    return p;
}
int operate(int b, int a, char op){
    int p;
    switch(op){
        case '%':
            p=a%b; break;
        case '/':
            p=a/b; break;
        case '*':
            p=a*b; break;
        case '+':
            p=a+b; break;
        case '-':
            p=a-b; break;
    }
}
int main(){
    char exp[400];
    cin>>exp;
    int n=strlen(exp);
    stack<char>op;
    stack<int>num;
    for(int i=0;i<n;i++){
        if(isdigit(exp[i])){
            int ut = (int)exp[i]-48;
            cout<<ut<<"\n";
            num.push(ut);
            cout<<num.top();
        }
        else{
            if(precedence(exp[i]) < precedence(op.top())){
                char op1 = op.top(); op.pop();
                int a=num.top(); num.pop();
                int b=num.top(); num.pop();
                int res = operate(a,b,op1);
                cout<<"res = "<<res<<"\n";
                num.push(res);
                op.push(exp[i]);
            }
            else{
                op.push(exp[i]);
            }
        }
        cout<<"dsd";
    }
    while(num.size()>1){
        char op1 = op.top(); op.pop();
        int a=num.top(); num.pop();
        int b=num.top(); num.pop();
        int res = operate(a,b,op1);
        num.push(res);
    }
    cout<<num.top();
}
