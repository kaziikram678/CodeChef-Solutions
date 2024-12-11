#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cy cout << "NO" << endl
#define cl cout << endl

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, k, p;
        cin >> n >> k >> p;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        ll x = p;
        for (ll i = 0; i < n - 1; i++)
        {
            x += v[i];
        }

        ll y = k + v[n - 1];

        if (y > x)
            cout << "Ved" << endl;
        else if (x > y)
            cout << "Varun" << endl;
        else
            cout << "Equal" << endl;
    }

    return 0;
}
