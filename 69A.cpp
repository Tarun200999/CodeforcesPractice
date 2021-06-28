#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int netX=0;
 int netY=0;
 int netZ=0;
 while(n-->0)
 {
     int x,y,z;
     cin>>x>>y>>z;
     netX+=x;
     netY+=y;
     netZ+=z;
 }
 if(netX||netY||netZ)
 {
     cout<<"NO\n";
 }
 else{
    cout<<"YES\n";
 }
}



