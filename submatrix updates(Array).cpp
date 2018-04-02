#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
          cin>>arr[i][j];

    for(int p=0;p<k;p++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int i1=a-1;i1<a+c-1;i1++)
        {
            for(int j1=b-1;j1<b+c-1;j1++)
            {
                //arr[i1][j1]+=d;
            }
        }
    }
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
