#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int a[26]={0};
 for(int i=0;i<s.length();i++)
 {
     a[s[i]-'a']=1;
 }
 int c=0;
 for(int i=0;i<26;i++)
 {
     if(a[i]==1)
        c++;
 }
 if(c%2==0)
 {
    cout<<"CHAT WITH HER!"<<endl;
 }
 else{
    cout<<"IGNORE HIM!"<<endl;
 }

}

