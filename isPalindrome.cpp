#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int isPalindrome(int &A) {
    stringstream geek;
    geek<<A;
    string str1=geek.str();
    int n=str1.length();
    for(int i=0; i<n/2; i++){
        if(str1[i]!=str1[n-1-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int A=;
    cout<<isPalindrome(A);
}
