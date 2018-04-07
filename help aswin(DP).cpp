#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;

		long long int ar[n][m];
		for(int i=0;i<n;i++)
		    for(int j=0;j<m;j++)
                cin>>ar[i][j];

		for(int i=1; i<n;i++)
            {
		    long long int t1=-1,t2=-1;
		    int index;

		    for(int j=0;j<m;j++)
                {
                    if(ar[i-1][j] >= t1)
                    {
                        t2 = t1;
                        t1 = ar[i-1][j];
                        index = j;
                    }
                    else if(ar[i-1][j] > t2)
                        t2 = ar[i-1][j];
		        }

                for(int j=0;j<m;j++)
                {
                    if(j != index)
                        ar[i][j] += t1;
                    else
                        ar[i][j] += t2;
                }
		}

		long long int ans = *max_element(ar[n-1],ar[n-1]+m);
		cout<<ans<<endl;
	}

	return 0;
}
