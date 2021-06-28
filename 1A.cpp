#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,a;
    cin>>s1>>s2>>a;
    int v1=s1/a;
    int v2=s2/a;
    int l=(s1%a==0)?(v1):(v1+1);
    int b=(s2%a==0)?(v2):(v2+1);
    cout<<l*1LL*b<<endl;
}

