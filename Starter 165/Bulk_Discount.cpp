#include<bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cy cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl

int main()
{
    ll tt;
    cin>>tt;

    while(tt--)
    {
        int n,m;
        cin>>n;

        vector<int> v(n);

        for(ll i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += max(0,v[i]-i);
        }

        cout<<ans<<endl;
    }


}