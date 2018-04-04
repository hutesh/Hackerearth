#include<bits/stdc++.h>
using namespace std;
int count1(int arr[],int k,int n)
{
    int sum=0,count=0;
    map<int,int>m;
    map<int,int>::iterator it;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(m[sum-k])
            count=count+m[sum-k];
        m[sum-k]++;

    }
    for(it=m.begin();it!=m.end();it++)
    {
        //cout<<it->first<<" "<<it->second<<"\n";
    }
    return count;
}
int main()
{
    int n,k=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int result=count1(arr,k,n);
    cout<<result;
    return 0;
}
