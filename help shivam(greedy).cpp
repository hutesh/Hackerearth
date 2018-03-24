#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,x,sum=0,dif=0;
    priority_queue<ll, vector<ll>, greater<ll> > pq; // min heap
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if (!pq.empty() && pq.top()<x) // comparison
		{
		    dif=x-pq.top();
			sum+=dif;
			pq.pop();
			pq.push(x);
		}
		pq.push(x);
	}
	cout<<sum<<endl;
	return 0;
}
