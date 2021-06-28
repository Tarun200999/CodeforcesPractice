#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
int n;
cin>>n;
cin>>s;
vector<char> v;
for(auto i:s)
    v.push_back(i);
int c=0;
for(int i=1;i<v.size();)
{

    if(v[i]==v[i-1])
    {    c++;
        v.erase(v.begin()+i);
    }
    else{
        i++;
    }
}
cout<<c<<endl;

}

