#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ll sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    ll max=-1;
    ll first=0;
    for(int i=0;i<n-1;i++)
    {
        first+=arr[i];
        sum-=arr[i];
        if(max<first*sum)
            max=first*sum;
    }
    cout<<max;
    return 0;
}
