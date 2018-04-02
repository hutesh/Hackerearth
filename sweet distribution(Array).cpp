#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    for(int i1=0;i1<t;i1++)
    {
        int n,m,r,c,x,y,flag=1;
        cin>>n>>m>>r>>c>>x>>y;
        if(r==1&&c==1)
        {
            if(y==1)
            {
                if(x%2==0)
                {
                    if(x==n)
                        cout<<"Over\n";
                    else
                        cout<<"Back\n";
                }
                else
                    cout<<"Right\n";
            }
            else if(y==m)
            {
                if(x%2!=0)
                {
                    if(x==n)
                        cout<<"Over\n";
                    else
                        cout<<"Back\n";
                }
                else
                    cout<<"Left\n";
            }
            else
            {
                if(x%2==0)
                    cout<<"Left\n";
                else
                    cout<<"Right\n";
            }
        }

        //////////////////////////

        else if(r==1&&c==m)
        {
            if(y==1)
            {
                if(x%2!=0)
                {
                    if(x==n)
                        cout<<"Over\n";
                    else
                        cout<<"Back\n";
                }
                else
                    cout<<"Right\n";
            }
            else if(y==m)
            {
                if(x%2==0)
                {
                    if(x==n)
                        cout<<"Over\n";
                    else
                        cout<<"Back\n";
                }
                else
                    cout<<"Left\n";
            }
            else
            {
                if(x%2!=0)
                    cout<<"Left\n";
                else
                    cout<<"Right\n";
            }
        }
        //////////////////////////////////

        else if(r==n&&c==1)
        {
            if(y==1)
            {
                if((n-x)%2!=0)
                {
                    if(x==1)
                        cout<<"Over\n";
                    else
                        cout<<"Front\n";
                }
                else
                    cout<<"Right\n";
            }
            else if(y==m)
            {
                if((n-x)%2==0)
                {
                    if(x==1)
                        cout<<"Over\n";
                    else
                        cout<<"Front\n";
                }
                else
                    cout<<"Left\n";
            }
            else
            {
                if((n-x)%2!=0)
                    cout<<"Left\n";
                else
                    cout<<"Right\n";
            }
        }

        /////////////////////////////
        else if(r==n&&c==m)
        {
            if(y==1)
            {
                if((n-x)%2==0)
                {
                    if(x==1)
                        cout<<"Over\n";
                    else
                        cout<<"Front\n";
                }
                else
                    cout<<"Right\n";
            }
            else if(y==m)
            {
                if((n-x)%2!=0)
                {
                    if(x==1)
                        cout<<"Over\n";
                    else
                        cout<<"Front\n";
                }
                else
                    cout<<"Left\n";
            }
            else
            {
                if((n-x)%2==0)
                    cout<<"Left\n";
                else
                    cout<<"Right\n";
            }
        }

    }
    return 0;
}
