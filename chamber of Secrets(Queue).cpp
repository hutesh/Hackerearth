#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n,x;
    cin>>n>>x;
    int value[n+1];
    int power[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>value[i];
        q.push(i);
        power[i]=value[i];
    }
    int total=0;
    while(total!=x)
    {
        queue<int>q2;
        int p=0,maxi=q.front();
        while(p<x&&!q.empty())
        {
            if(power[maxi]<power[q.front()])
            {
                maxi=q.front();
            }
            q2.push(q.front());
            q.pop();
            p++;
        }
        while(!q2.empty())
        {
            if(q2.front()!=maxi)
            {
               q.push(q2.front());
               if(power[q2.front()]>0)
                   power[q2.front()]--;
            }
            q2.pop();
        }
        cout<<maxi<<" ";
        if(q.empty())
            break;
        total++;
    }
    return 0;
}
