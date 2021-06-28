#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a,b;
 cin>>a>>b;
 int ans=0;
 for(int i=0;i<a.length();i++)
 {
     char ch1=isupper(a[i])?a[i]+32:a[i];
     char ch2=isupper(b[i])?b[i]+32:b[i];
     if(ch1<ch2)
     {
         cout<<"-1"<<endl;
         ans=-1;
         break;
     }
     if(ch1>ch2)
     {
         cout<<"1"<<endl;
         ans=1;
         break;
     }
 }
 if(ans==0)
 {
     cout<<"0"<<endl;
 }
}







