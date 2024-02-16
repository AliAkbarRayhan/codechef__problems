



#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int total=0;
        if(x<=100)
        {
            total=x;

        }
        else if(x>100)
        {
            total=x-10;

        }
        cout<<total<<endl;

    }



}





