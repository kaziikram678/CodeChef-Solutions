#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        ll cnts = 0, cntt = 0;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cnts++;

            if (t[i] == '1')
                cntt++;
        }

        if ((cnts + cntt) % 2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
