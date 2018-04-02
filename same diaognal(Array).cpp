#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,count=0;
        cin>>n;
        map<ll,ll>m;
        map<ll,ll>::iterator it;
        map<ll,ll>m1;
        map<ll,ll>::iterator it1;
        for(ll j=0;j<n;j++)
        {
            ll x,y;
            cin>>x>>y;
            m1[x+y]++;
            m[x-y]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            ll p=it->second;
            if(p>1)
             count=count+p*(p-1)/2;
        }
        for(it1=m1.begin();it1!=m1.end();it1++)
        {
            ll p=it1->second;
            if(p>1)
             count=count+p*(p-1)/2;
        }
        cout<<count<<"\n";
    }
    return 0;
}
