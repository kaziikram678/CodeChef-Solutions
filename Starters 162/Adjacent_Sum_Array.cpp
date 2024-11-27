#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n - 1), vv(n);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vv[0] = 1;
        vv[1] = v[0] - vv[0];

        for (int i = 2; i < n ; i++)
        {
            vv[i] = v[i - 1] - vv[i-1];
        }

        for (int i = 0; i < n; i++)
        {
            cout << vv[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
