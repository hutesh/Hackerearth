#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    int check[n][m];
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            check[i][j]=0;
        }
    }

    int total=0,index=0;

    int maxi=mat[n-1][0];
     for(int i=1;i<m;i++)
     {
         if(mat[n-1][i]>maxi)
         {
             maxi=mat[n-1][i];
             index=i;
         }
     }
     total+=mat[n-1][index];
     for(int i=n-2;i>=0;i--)
     {
         check[i][index]=1;
         index=-1;
         maxi=-1;
         for(int j=0;j<m;j++)
         {
             if(check[i][j]!=1&&mat[i][j]>maxi)
             {
                 maxi=mat[i][j];
                 index=j;
             }
         }
         total+=mat[i][index];
     }
     cout<<total<<"\n";
}
return 0;
}
