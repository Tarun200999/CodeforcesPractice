#include<bits/stdc++.h>
using namespace std;
int minans=INT_MAX;
int maxans=INT_MIN;
void get(int m,int s,int d,int t,string psf)
{
    if(d>m)
        return;
    if(s==t)
    {
        int num=stoi(psf);
        if(num>maxans)
            maxans=num;
        if(num<minans)
            minans=num;
    }
    for(int i=1;i<=9;i++)
    {
        char ch=i+'0';
        psf.push_back(ch);
        get(m,s,d+1,t+i,psf);
        psf.pop_back();
    }
}
int main()
{
 int m,s;
 cin>>m>>s;
 get(m,s,0,0,"");

 if(minans==INT_MAX&&maxans==INT_MIN)
    cout<<"-1 -1"<<endl;
 else{
 cout<<minans<<" "<<maxans<<endl;
 }
}





