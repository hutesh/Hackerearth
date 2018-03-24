#include<stdlib.h>
#include<limits.h>
#include<stdio.h>
int solve(int arr[],int n, int a2bp)
{
    int m[a2bp+1],i,j;
    for(i=1;i<=a2bp;i++)
        m[i]=INT_MAX;
    m[0]=0;
    for(i=1;i<=a2bp;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=arr[j])
            {
                if(m[i-arr[j]]+1<m[i]&&m[i-arr[j]]!=INT_MAX)
                    m[i]=m[i-arr[j]]+1;
            }
        }
    }
    if(m[a2bp]== INT_MAX)
        return -1;
    return m[a2bp];
}
int main()
{
   int t,a2bp,n,*arr,i;
   long long int r;
   scanf("%d",&t);
   while(t--)
   {
    scanf("%d%d",&a2bp,&n);
    arr=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    r=solve(arr,n,a2bp);
    if(r==-1||r==0)
    printf("No solution\n");
    else
    printf("%lld\n",r);
   }
   return 0;
}
