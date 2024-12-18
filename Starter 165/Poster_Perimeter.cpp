#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        ll d = LLONG_MAX;

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                ll p = 2 * (i + j);
                ll d2 = abs(p - k);
                d = min(d, d2);
            }
        }

        cout << d << endl;
    }

    return 0;
}
