#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,s;
cin>>m>>s;
if(s==0|| s>m*9)
   {
     if(m==1&&s==0)
     {
         cout<<"0 0"<<endl;
     }
     else
     {
   cout<<"-1 -1"<<endl;
     }
   }
   else
   {
     vector<int> ans(m,0);
     int i=0;
     while(i<m&&s>9)
     {
         ans[i]=9;
         i++;
         s-=9;
     }

     ans[i]=s;
     string largest;
     for(auto i:ans)
        largest.push_back(i+'0');
     if(ans[m-1]==0)
     {
         for(int i=m-1;i>=0;i--)
         {
             if(ans[i]!=0)
             {
                 ans[i]-=1;
                 break;
             }
         }
         ans[m-1]=1;
     }
     for(int i=m-1;i>=0;i--)cout<<ans[i];
     cout<<" "<<largest<<endl;
   }
}
