#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    int mat[n][m];
    mat[0][0]=arr[0][0];
    for(int j=1;j<m;j++)
        mat[0][j]=mat[0][j-1]+arr[0][j];
    for(int i=1;i<n;i++)
        mat[i][0]=mat[i-1][0]+arr[i][0];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            mat[i][j]=mat[i][j-1]+mat[i-1][j]+arr[i][j]-mat[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    for(int k=0;k<q;k++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a--;
        b--;
        c--;
        d--;
        int p=0;
        if(c>=0&&c<n&&d>=0&&d<m)
            p+=mat[c][d];
        if(c>=0&&c<n&&b-1>=0&&b-1<m)
            p=p-mat[c][b-1];
        if(a-1>=0&&a-1<n&&d>=0&&d<m)
            p=p-mat[a-1][d];
        if(a-1>=0&&a-1<n&&b-1>=0&&b-1<m)
            p=p+mat[a-1][b-1];
        cout<<p<<"\n";

    }
    return 0;
}
