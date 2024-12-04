#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v[i] = v[i]*x;
        }

        sort(v.begin(), v.end(),greater<int>());

        // for(auto it:v)
        // {
        //     int p = it.first;
        //     int q = it.second;
        //     cout<<p<<" "<<q<<endl;
        // }

        int cnt = 0;
        while(cnt<n && x>0)
        {
            x-= v[cnt];
            cnt++;
        }

        if (x > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
    return 0;
}
