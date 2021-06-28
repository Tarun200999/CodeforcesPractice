#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
  if(n==1&&m==1)
  {
      cout<<"0"<<endl;
  }
  else if(n==1)
  {
      cout<<m/2<<endl;
  }
  else if(m==1)
  {
      cout<<n/2<<endl;
  }
  else{
    int pL=m;
    int pB=n/2;
    if(n%2!=0)
    {

        cout<<pL*1LL*pB+(m/2)<<endl;
    }
    else{
        cout<<pL*1LL*pB<<endl;
    }
  }
}




