#include<bits/stdc++.h>
using namespace std;
int main()
{
 int k,n,w;
 cin>>k>>n>>w;
 for(int i=1;i<=w;i++)
 {
     n-=i*k;
 }
 if(n<0)
  cout<<-1*n<<endl;
 else
    cout<<"0\n";
}




