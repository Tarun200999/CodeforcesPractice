#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[5][5];
  int oneI=0;
  int oneJ=0;
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {

          cin>>a[i][j];
          if(a[i][j])
          {
              oneI=i;
              oneJ=j;
          }
      }
  }
  cout<<abs(2-oneI)+abs(2-oneJ)<<endl;
}








