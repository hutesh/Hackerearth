#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int h=0;h<t;h++)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
          cin>>arr[i];

    int store[n];
    stack<int>s;
    store[0]=1;
    s.push(0);
    for(int i=1;i<n;i++)
    {
        while(!s.empty()&&arr[i]>=arr[s.top()])
            s.pop();

        if(s.empty())
            store[i]=i+1;
        else
            store[i]=i-s.top();
        s.push(i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<store[i]<<" ";
    }
     cout<<"\n";

    }
    return 0;
}

