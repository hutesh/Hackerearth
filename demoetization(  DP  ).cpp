#include<bits/stdc++.h>
using namespace std;
#define m 1000000
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int A,N;
        cin>>A>>N;
        int arr[N];
        int mat[A+1];
        for(int j=0;j<N;j++)
            cin>>arr[j];
        for(int j=1;j<=A;j++)
            mat[j]=m;

        sort(arr,arr+N);
        mat[0]=0;
        for(int j=0;j<N;j++)
        {
            for(int k=arr[j];k<=A;k++)
            {
                 mat[k]=min(mat[k],1+mat[k-arr[j]]);
            }
        }
        if(mat[A]>=m)
            cout<<"No solution\n";
        else
            cout<<mat[A]<<"\n";
    }
}

