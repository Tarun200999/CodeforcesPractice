#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
cin>>t;
while(t-->0)
{
    string s;
    cin>>s;
    int slen=s.length();
    cout<<slen<<endl;
    if(slen<=10)
    {
        cout<<s<<endl;
    }
    else{
       string ib=s[0]+to_string(slen-2)+s[slen-1];
       cout<<ib<<endl;
    }
}
}

