#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,m,t,c,x,y;
        cin>>n>>m>>t>>c;
        vector<int>v[n+1];
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        cin>>x>>y;
        queue<int>q;
        q.push(x);
        int vis[n+1];
        for(int i=1;i<=n;i++)
            vis[i]=0;
        int prev[n+1];
        prev[x]=-1;
        vis[x]=1;
        //int T=0;
        //int min=0;
        //vector<int>P;
        //vector<int>s;
        while(!q.empty())
        {
            int p=q.front();
            //if(v[p].size()>0)
               // T=T+5;
               q.pop();
            sort(v[p].begin(),v[p].end());
            for(int j=0;j<v[p].size();j++)
            {
                if(vis[v[p][j]]==0)
                {
                    vis[v[p][j]]=1;
                    q.push(v[p][j]);
                    prev[v[p][j]]=p;
                }
            }
        }
        int count=1;
        stack<int>s;
        s.push(y);
        while(prev[y]!=-1)
        {
            count++;
            s.push(prev[y]);
            y=prev[y];
        }
        cout<<count<<"\n";
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        return 0;
}
