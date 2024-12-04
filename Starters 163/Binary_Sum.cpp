#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> one,zero;

        if (k > n)
        {
            cout << "NO" << endl;
            continue;
        }

        for(int i=0;i<n;i++)
        {
            if(i%2==1)
            one.push_back(0);
            else one.push_back(1);
        }

        for(int i=0;i<n;i++)
        {
            if(i%2==1)
            zero.push_back(1);
            else zero.push_back(0);
        }
        int sum1 = 0, sum2 = 0;
        for(int i=0;i<n;i++)
        {
            sum1+=one[i];
            sum2+=zero[i];
        }

        if(sum1==k || sum2 == k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
