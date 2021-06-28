#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    int kth=a[k-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0&&a[i]>=kth)
            ans++;

    }
    cout<<ans<<endl;
}



