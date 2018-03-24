#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
    {
        int t,l;

        cin>>t;
        while(t--){
            string s;
            cin>>s;
            int a[26] = {0}, b[26] = {0}, x=0;
            l = s.length()/2;
            if(s.length()%2==0)
    	{
    		for(int i=0;i<l;i++)
    			a[s[i]-'a']++;
    		for(int i=l;i<s.length();i++)
    			b[s[i]-'a']++;
    		for(int i=0;i<26;i++)
    			if(a[i]!=b[i])
    			{
    				x=1;
    				break;
    			}
    		if(x==1)
    			cout<<"NO"<<endl;
    		else
    			cout<<"YES"<<endl;
    	}
    	else
    	{
    		for(int i=0;i<l;i++)
    			a[s[i]-'a']++;
    		for(int i=l+1;i<s.length();i++)
    			b[s[i]-'a']++;
    		for(int i=0;i<26;i++)
    			if(a[i]!=b[i])
    			{
    				x=1;
    				break;
    			}
    		if(x==1)
    			cout<<"NO"<<endl;
    		else
    			cout<<"YES"<<endl;

    	}
        }
    }


//int main()
//    {
//        int t,l;
//        bool flag = true;
//
//        cin>>t;
//        while(t--){
//            string s;
//            cin>>s;
//            l = s.length();
//            sort(s.begin(), s.begin()+l/2);
//            sort(s.begin()+l/2+1, s.end());
//            for(int i=0; i<l/2; i++){
//                if(l%2==0){
//                    if(s[i]!=s[l/2+i]){
//                        cout<<"NO"<<endl;
//                        flag=false;
//                        break;
//                    }
//                }
//                else{
//                    if(s[i]!=s[l/2+1+i]){
//                        cout<<"NO"<<endl;
//                        flag=false;
//                        break;
//                    }
//                }
//            }
//            if(flag)
//                cout<<"YES"<<endl;
//        }
//    }
