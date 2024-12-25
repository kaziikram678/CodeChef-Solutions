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
        ll n;
        cin>>n;

        vector<ll> v(n);
        set<ll> s;

        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
            s.insert(v[i]);
        }

        vector<ll> vv;
        for(auto it:s)
        {
            ll ans  = 0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==it)
                {
                    ans = i;
                }
            }
            vv.push_back(ans);
        }


        ll res  = 0;

        for(ll i=0;i<vv.size();i++)
        {
            res += vv[i]+1;
        }
        cout<<res<<endl;


    }


}