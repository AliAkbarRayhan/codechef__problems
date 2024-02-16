

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int ans=0;
        int maxi=max({a,b,c});
        int mini=min({a,b,c});
        //cout<<maxi<<"\n";
       // cout<<mini<<"\n";

        for(int i=a;i<=c; i++)
        {
            if(i%a==0 && i%b==0 && i%c==0)
            {
                ans=maxi+1;

            }
            else
            {
                ans=mini-1;
            }

        }
cout<<ans<<"\n";
    }
    return 0;
}
