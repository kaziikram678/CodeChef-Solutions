#include<bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl

int main()
{
    ll tt;
    cin>>tt;

    while(tt--)
    {
        ll n,m,p;
        cin>>n>>m>>p;

        ll ans = 2*(n*m + n*p + m*p);

        ll ans1 = 1000/ans;

        cout<<ans1<<endl;
    }


}