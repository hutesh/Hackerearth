#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void multiply(ll a[3][3], ll b[3][3])
{
   ll mul[3][3];
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (ll k = 0; k < 3; k++)
                mul[i][j] =(mul[i][j]+ a[i][k]*b[k][j])%(1000000000+7);
        }
    }
    for (ll i=0; i<3; i++)
        for (ll j=0; j<3; j++)
            a[i][j] = mul[i][j];
}

ll power(ll F[3][3], ll n)
{
    ll M[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}};
    if (n==1)
        return (F[0][0] + F[0][1])%(1000000000+7);

    power(F, n/2);

    multiply(F, F);

    if (n%2 != 0)
        multiply(F, M);

    return (F[0][0] + F[0][1])%(1000000000+7) ;
}

ll findNthTerm(ll n)
{
    ll F[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}} ;

    return power(F, n);
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll one=2;
        ll two=4;
        ll three=7;
        if(n==1)
            cout<<"2\n";
        else if(n==2)
            cout<<"4\n";
        else if(n==3)
            cout<<"7\n";
        else
        {
            ll p=findNthTerm(n);
            cout<<p<<"\n";
        }

    }
    return 0;
}
