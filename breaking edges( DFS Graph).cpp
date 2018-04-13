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
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n,x,y;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++)
            cin>>a[i];
        vector<vector<ll> >v(n+1,vector<ll>(0));
        map<pair<ll,ll>,ll>m;
        map<pair<ll,ll>,ll>::iterator it;
        for(int i=0;i<n-1;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
            m[make_pair(min(x,y),max(x,y))]=1;
        }
        ll count=0;

           for(it=m.begin();it!=m.end();it++)
           {
                    ll i=it->first.first;
                    ll h=it->first.second;
                    init(n+1);
                    stack<ll>s;
                    s.push(i);
                    vis[i]=1;

                    ll first=a[i];
                           while(!s.empty())
                           {
                             ll p = s.top();
                             s.pop();
                                for(int k=0;k<v[p].size();k++)
                                {
                                    if(v[p][k]==h)
                                        continue;
                                    if(vis[v[p][k]]==0)
                                    {
                                        s.push(v[p][k]);
                                        vis[v[p][k]]=1;
                                        first=first|a[v[p][k]];
                                    }
                                }
                           }
                           int flag=0;
                           ll second;
                           for(int k=1;k<=n;k++)
                           {
                               if(vis[k]==0&&flag==0)
                               {
                                  second=a[k];
                                  flag=1;
                               }
                               else if(vis[k]==0&&flag==1)
                                  second=second|a[k];
                           }
                           if(first==second)
                               count++;
                     }
       cout<<count<<"\n";
        return 0;
}

