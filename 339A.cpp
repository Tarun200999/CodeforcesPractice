#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int n=s.length();
    if(n<=1)
    {

        cout<<s<<endl;
    }
    else
    {
        vector<int> num;
        for(int i=0;i<n;i++)
        {
          if(s[i]!='+')
          {
              num.push_back(s[i]-'0');
          }

        }
        sort(num.begin(),num.end());
        string ans;
        for(int i=0;i<num.size();i++)
        {
            char ch=num[i]+'0';
            if(i<num.size()-1)
            {
                ans.push_back(ch);
                ans.push_back('+');
            }
            else
            {

                ans.push_back(ch);
            }
        }
        cout<<ans<<endl;
    }
}
