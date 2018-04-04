#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    if(n==1||n==2)
        return 1;
    for(int j=2;j<n;j++)
    {
        if(n%j==0)
            return 0;
    }
    return 1;
}
int check(int n)
{
    int count=0;
  for(int i=1;i<=n;i++)
  {
      if(n%i==0)
      {
          if(prime(i))
             count++;
          else
            return 0;
      }
  }
  if(count%2==0)
    return 1;
  else
    return 0;
}
int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,count=0;
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            if(check(j))
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}

