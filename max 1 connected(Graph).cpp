#include <bits/stdc++.h>
using namespace std;
int check(int a,int b,int n,int m)
{
    if(a<n&&a>=0&&b<m&&b>=0)
        return 1;
    return 0;
}
void findBoogle_word(int x,int y,vector<vector<int> >&mat,vector<vector<int> >&vis,int n,int m,int &count)
{
     if(check(x-1,y-1,n,m))
     {
         if(mat[x-1][y-1]==1&&vis[x-1][y-1]==0)
         {
            vis[x-1][y-1]=1;
            //cout<<count<<"\n";cout<<x-1<<" "<<y-1<<"\n";
            count++;
            findBoogle_word(x-1,y-1,mat,vis,n,m,count);
         }
     }


     if(check(x-1,y,n,m))
     {
         if(mat[x-1][y]==1&&vis[x-1][y]==0)
         {
            vis[x-1][y]=1; //cout<<count<<"\n";cout<<x-1<<" "<<y<<"\n";
            count++;
            findBoogle_word(x-1,y,mat,vis,n,m,count);
         }
     }



     if(check(x-1,y+1,n,m))
     {
         if(mat[x-1][y+1]==1&&vis[x-1][y+1]==0)
         {
            vis[x-1][y+1]=1; //cout<<count<<"\n";cout<<x-1<<" "<<y+1<<"\n";
            count++;
            findBoogle_word(x-1,y+1,mat,vis,n,m,count);
         }
     }



     if(check(x,y+1,n,m))
     {
         if(mat[x][y+1]==1&&vis[x][y+1]==0)
         {
            vis[x][y+1]=1; //cout<<count<<"\n";cout<<x<<" "<<y+1<<"\n";
            count++;
            findBoogle_word(x,y+1,mat,vis,n,m,count);
         }
     }



     if(check(x+1,y+1,n,m))
     {
         if(mat[x+1][y+1]==1&&vis[x+1][y+1]==0)
         {
            vis[x+1][y+1]=1; //cout<<count<<"\n";cout<<x+1<<" "<<y+1<<"\n";
            count++;
            findBoogle_word(x+1,y+1,mat,vis,n,m,count);
         }
     }

     if(check(x+1,y,n,m))
     {
         if(mat[x+1][y]==1&&vis[x+1][y]==0)
         {
            vis[x+1][y]=1; //cout<<count<<"\n";cout<<x+1<<" "<<y<<"\n";
            count++;
            findBoogle_word(x+1,y,mat,vis,n,m,count);
         }
     }

     if(check(x+1,y-1,n,m))
     {
         if(mat[x+1][y-1]==1&&vis[x+1][y-1]==0)
         {
            vis[x+1][y-1]=1; //cout<<count<<"\n";cout<<x+1<<" "<<y-1<<"\n";
            count++;
            findBoogle_word(x+1,y-1,mat,vis,n,m,count);
         }
     }


     if(check(x,y-1,n,m))
     {
         if(mat[x][y-1]==1&&vis[x][y-1]==0)
         {
            vis[x][y-1]=1; //cout<<count<<"\n";cout<<x<<" "<<y-1<<"\n";
            count++;
            findBoogle_word(x,y-1,mat,vis,n,m,count);
         }
     }
     return ;
}
int main() {
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
	int n,m;
	cin>>n>>m;
        vector<vector<int> >mat(n,vector<int>(m));
        vector<vector<int> >vis(n,vector<int>(m,0));
         for(int j=0;j<n;j++)
            for(int k=0;k<m;k++)
              cin>>mat[j][k];
            int maxOne=0,count,p=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                     count=0;
                  if(mat[i][j]==1&&vis[i][j]==0)
                  {
                        findBoogle_word(i,j,mat,vis,n,m,count);
                        p++;
                  }
                  if(count>maxOne)
                    maxOne=count;

                }
            }
        cout<<p<<" "<<maxOne<<"\n";;
    }
    return 0;
}

