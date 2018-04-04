#include <bits/stdc++.h>
using namespace std;
#define int1 long long
int1 gcd(int1 A,int1 B)
{
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
int main()
{
   int1 n;
   cin>>n;
   int1 a[n];
   for(int1 i=0;i<n;i++)
    cin>>a[i];
    int1 mat[200000+1][200000+1];
    for(int1 i=0;i<=200000;i++)
    {
        mat[i][i]=a[i];
        for(int1 j=i+1;j<=200000;j++)
        {
            mat[i][j]=gcd(a[i],a[j]);
            mat[j][i]=mat[i][j];
        }
    }
    for(int1 i=0;i<n;i++)
    {
        int1 diff=INT_MAX,index=-1;
        for(int1 j=0;j<n;j++)
        {
            if(i==j)
             continue;
             else
             {
                 if(mat[i][j]>1)
                     {
                         if(diff>fabs(i-j))
                             {
                                 diff=fabs(i-j);
                                 index=j;
                                 }
                        else if(diff==fabs(i-j))
                           {
                               if(j<index)
                                index=j;
                           }

                     }

             }
        }
        if(index=-1)
        cout<<"-1"<<" ";
        else
        cout<<index+1<<" ";
    }
    return 0;
}
