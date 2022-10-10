#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e=0,f;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++)
    {
        d=a*i;
        e+=d;
    }
    if(e<=b)
    {
        cout<<0<<endl;
    }
    else
    {
       f=e-b;
       cout<<f<<endl;
    }
	return 0;
}
