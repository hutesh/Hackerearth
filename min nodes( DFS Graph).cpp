#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll vis[1000000];
ll mini;
void init(ll n)
{
    for(ll i=0;i<n;i++)
        vis[i]=0;
}
ll dfs(ll x,ll arr[],ll y,ll sum,ll count,vector<vector<ll> > &v)
{
        vis[x]=1;
        count++;
        sum=sum+arr[x];
        if(sum>=y)
        {
            mini=min(mini,count);
            return mini;
        }
        else
        {
            ll p=INT_MAX;
            for(ll j=0;j<v[x].size();j++)
            {
                if(vis[v[x][j]]==0)
                  p=min(p,dfs(v[x][j],arr,y,sum,count,v));

            }
            return p;
        }

}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n,q,x,y;
        cin>>n>>q;
        ll a[n+1];
        for(ll i=1;i<=n;i++)
            cin>>a[i];
        vector<vector<ll> >v(n+1,vector<ll>(0));
        for(int i=0;i<n-1;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(ll i=0;i<q;i++)
        {
            cin>>x>>y;
            ll sum=0;
            mini=INT_MAX;
            ll count=0;
            init(n+1);
            ll p=dfs(x,a,y,sum,count,v);
            if(p==INT_MAX)
                cout<<"-1\n";
            else
                cout<<p<<"\n";

        }
        return 0;
}
