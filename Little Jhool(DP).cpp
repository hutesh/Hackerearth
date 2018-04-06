#include<bits/stdc++.h>
using namespace std;
#define m 10000
int a[115];
int main()
{
    int t;
    cin>>t;
    a[0]=0;
    for(int i=1;i<=11;i++)
        a[i]=m;
    a[10]=1;
    a[12]=1;
    for(int i=13;i<115;i++)
    {
        a[i]=min(1+a[i-10],a[i-12]+1);
    }
    int n;
    while(t--)
    {
        scanf("%d",&n);
        if(a[n]>=m)
            cout<<"-1"<<"\n";
        else
            cout<<a[n]<<"\n";
    }
    return 0;
}
