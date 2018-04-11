#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=1;
    cin>>n;
    int a1[n-1];
    int a2[n-1];
    int d1[n];
    int d2[n];
    for(int i=0;i<=n-2;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            a1[i]=0;
            a2[i]=1;
        }
        else
        {
            a1[i]=1;
            a2[i]=0;
        }
    }
    for(int i=0;i<=n-2;i++)
    {
        if(i==0&&a1[i]==0)
            d1[i]=1;
        else
        {
            if(a1[i]==0)
            {
                d1[i]=1;
                if(a1[i-1]==0)
                    d1[i]+=d1[i-1];
            }
        }
    }
    if(a1[n-2]==0)
    {
       d1[n-1]=1+d1[n-2];
    }
    else
        d1[n-1]=1;

    for(int i=n-2;i>=0;i--)
    {
        if(i==0&&a1[i]==1)
            d1[i]=1+d1[i+1];
        else
        {
            if(a1[i]==1)
            {
                d1[i]=1+d1[i+1];
                if(a1[i-1]==0)
                    d1[i]+=d1[i-1];
            }
        }
    }
    ////////////////////////////////



    for(int i=0;i<=n-2;i++)
    {
        if(i==0&&a2[i]==0)
            d2[i]=1;
        else
        {
            if(a2[i]==0)
            {
                d2[i]=1;
                if(a2[i-1]==0)
                    d2[i]+=d2[i-1];
            }
        }
    }
    if(a2[n-2]==0)
    {
       d2[n-1]=1+d2[n-2];
    }
    else
        d2[n-1]=1;

    for(int i=n-2;i>=0;i--)
    {
        if(i==0&&a2[i]==1)
            d2[i]=1+d2[i+1];
        else
        {
            if(a2[i]==1)
            {
                d2[i]=1+d2[i+1];
                if(a2[i-1]==0)
                    d2[i]+=d2[i-1];
            }
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        char c;
        cin>>c;
        if(c=='Q')
        {
          int x;
          cin>>x;
          x--;
          if(flag==1)
          {
              cout<<d1[x]<<"\n";
          }
          else
          {
               cout<<d2[x]<<"\n";
          }
        }
        else
        {
            if(flag==1)
                flag=2;
            else
                flag=1;
        }
    }
    return 0;
}
