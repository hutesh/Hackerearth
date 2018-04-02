#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arrx[n];
    int arry[n];
    int val[n];
    float p=0;
    for(int i=0;i<n;i++)
    {
        cin>>arrx[i]>>arry[i]>>val[i];
    }
     float total=0,last;
     last=sqrt( pow((arrx[0]-arrx[n-1]),2) + pow((arry[0]-arry[n-1]),2));
     total=val[0]+val[n-1]-last;


     int index=1;

    for(int i=0;i<n-1;i++)
    {
        int temp=index+1;
        float d1,d2,tempLast;
        for(int j=index+1;j<n-1;j++)
         {
            d1=sqrt( pow((arrx[j]-arrx[i]),2) + pow((arry[j]-arry[i]),2));
            d2=sqrt( pow((arrx[j]-arrx[n-1]),2) + pow((arry[j]-arry[n-1]),2))
            if(total<total-last+val[j]-d1-d2)
            {
                tempLast=d2;

            }
         }
        total=total+d;
    }
    p=p-total;
    cout<<fixed<<setprecision(6)<<p<<"\n";
    return 0;
}
