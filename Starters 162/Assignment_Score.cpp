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

        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }

        int x = (n + 1) * 50;

        if (x - sum > 100)
            cout << -1 << endl;
        else if (x - sum <= 0)
            cout << 0 << endl;
        else
            cout << x - sum << endl;
    }
    return 0;
}
