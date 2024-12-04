#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        
        cin>>s;

        int cnt1 = 0;
        int cnt2 = 0;

        //vector<int> v;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a') cnt1++;
            else cnt2++;
        }

        //int res = 2*min(cnt1,cnt2);
        if(s.size()==1) cout<<1<<endl;
        else if(cnt1==1 && cnt2==1) cout<<1<<endl;
        else if(cnt1==cnt2) cout<<(cnt1+cnt2)<<endl;
        else cout<<3<<endl;
    }
    return 0;
}