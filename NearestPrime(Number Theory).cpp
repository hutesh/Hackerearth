#include<bits/stdc++.h>
using namespace std;
bool isPrime[10000000+1];
void sieve() {
        for(int i = 0; i <= 10000000;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= 10000000; ++i) {
             if(isPrime[i] == true) {
                 for(int j = i * i; j <= 10000000 ;j += i)
                     isPrime[j] = false;
            }
        }
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    sieve();
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int j=n-1;
        int k=n+1;
        if(isPrime[n])
            cout<<n<<"\n";
        else
        {
                while(1)
                {
                   if(isPrime[j])
                   {
                       cout<<j<<"\n";
                       break;
                   }
                   else if(isPrime[k])
                    {
                       cout<<k<<"\n";
                       break;
                   }
                   j--;
                   k++;
                }
        }
    }
}
