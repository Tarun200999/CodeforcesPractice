#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string swov="";
  for(int i=0;i<s.length();i++)
  {
      char ch=s[i];
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='Y')
      {
        continue;
      }
      else{
        if(isupper(ch))
        {
            ch=ch+32;
        }
        swov.push_back('.');
        swov.push_back(ch);
      }
  }
  cout<<swov<<endl;
}






