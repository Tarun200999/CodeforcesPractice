#include<bits/stdc++.h>
using namespace std;
int countDigit(string s,char ch)
{
 int g=0;
 //cout<<s<<endl;
 int maxOccur=INT_MIN;
 for(int i=0;i<s.length();i++)
 {
     if(s[i]==ch)
     {
        g++;
       // cout<<"Zero\n"<<endl;
     }
     else{
        if(g>maxOccur)
        {
            maxOccur=g;
        }
        g=0;
     }
 }
 if(g>maxOccur)
 {maxOccur=g;
 }
return maxOccur;
}
int main()
{
 string s;
 cin>>s;
 int maxOne=countDigit(s,'1');
 int maxZero=countDigit(s,'0');
 //cout<<maxOne<<"\n"<<maxZero<<endl;
 if(maxOne>=7||maxZero>=7)
 {
     cout<<"YES\n";
 }
 else{
    cout<<"NO\n";
 }
}


