#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int x = b + c;

    if (x >= a)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}