#include<stdio.h>

int main()
{
long long int l,r,temp,i;
long long int n;
scanf("%lld",&n);
long long int a[n];
for(i=1;i<=n;i++)
scanf("%lld",&a[i]);
int b;
scanf("%lld",&b);
while(b--)
{
scanf("%lld %lld",&l,&r);
for(int i=l;i<=r;i++)
{
temp=a[i];
a[i]=a[n-i+1];
a[n-i+1]=temp;
}
}
for(i=1;i<=n;i++)
printf("%lld ",a[i]);

return 0;
}
