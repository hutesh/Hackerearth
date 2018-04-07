#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        queue<ll>s1;
        queue<ll>s2;
        s1.push(-arr[0]);
        s1.push(arr[0]+1);
        s1.push(arr[0]-1);
        s1.push(arr[0]);
        for(ll i=1;i<n;i++)
        {
            ll a,b,c,d;
                a=-arr[i];
                b=arr[i]+i+1;
                c=arr[i]-i-1;
                d=arr[i];
            if(i%2!=0)
            {
                while(!s1.empty())
                {
                    ll p=s1.front();
                    s1.pop();
                    s2.push(a+p);
                    s2.push(b+p);
                    s2.push(c+p);
                    s2.push(d+p);
                }
            }
            else
            {
                while(!s2.empty())
                {
                    ll p=s2.front();
                    s2.pop();
                    s1.push(a+p);
                    s1.push(b+p);
                    s1.push(c+p);
                    s1.push(d+p);
                }
            }
        }
        ll flag=0;
        if(!s1.empty())
        {
            while(!s1.empty())
            {
                if(s1.front()==k)
                {
                    flag=1;
                    break;
                }
                else
                    s1.pop();
            }
        }
        else
        {
            while(!s2.empty())
            {
                if(s2.front()==k)
                {
                    flag=1;
                    break;
                }
                else
                    s2.pop();
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
