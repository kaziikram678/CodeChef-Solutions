#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v,vv;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                if(i%2==0)
                v.push_back(i);
                else
                vv.push_back(i);

            }
            
        }
        if(v.size()==vv.size()) cout<<0<<endl;
        else if(v.size()>vv.size()) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}