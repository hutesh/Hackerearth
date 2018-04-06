#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
        //ios_base::sync_with_stdio(0);
        //cin.tie(NULL);
        ll t,n;
        cin>>n>>t;
        vector<ll>A1(n);
        vector<ll>A2(n);
         for(ll k=0;k<n;k++)
            cin>>A1[k];
         for(ll k=0;k<n;k++)
            cin>>A2[k];
         vector<ll>v1;
         vector<ll>v2;
         vector<ll>v3;
         vector<ll>v4;
         v1.push_back(0);
         v2.push_back(0);
         v3.push_back(0);
         v4.push_back(0);

            int h=1;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                  v1.push_back(v1.back()+A1[i]);
                  v3.push_back(v3.back()+A2[i]);
                }
               else
               {
                  v2.push_back(v2.back()+A1[i]);
                  v4.push_back(v4.back()+A2[i]);
               }
            }
           /* for(int i=0;i<v1.size();i++)
                cout<<v1[i]<<" ";
                cout<<"\n";
            for(int i=0;i<v2.size();i++)
                cout<<v2[i]<<" ";
                cout<<"\n";
            for(int i=0;i<v3.size();i++)
                cout<<v3[i]<<" ";
                cout<<"\n";
            for(int i=0;i<v4.size();i++)
                cout<<v4[i]<<" ";*/

        for(int i=0;i<t;i++)
        {

            int a,b,c;
            ll sum=0;
            cin>>a>>b>>c;
             int q=(c-b+1)/2;
             int p=c-b+1-q;
            if(a==1)
            {
               if(b%2!=0)
               {
                   sum=sum+v1[(b/2)+p]-v1[b/2];
                   sum=sum+v4[(b/2)+q]-v4[b/2];
               }
               else
               {
                    sum=sum+v2[(b/2)+p-1]-v2[(b/2)]+A1[b-1];
                    sum=sum+v3[(b/2)+q]-v3[(b/2)];
               }

            }
            else
            {
                if(b%2!=0)
               {
                   sum=sum+v3[(b/2)+p]-v3[b/2];
                   sum=sum+v2[(b/2)+q]-v2[b/2];
               }
               else
               {
                    sum=sum+v4[(b/2)+p-1]-v4[(b/2)]+A2[b-1];
                    sum=sum+v1[(b/2)+q]-v1[(b/2)];
               }
            }
            cout<<sum<<"\n";
        }

    return 0;
}
