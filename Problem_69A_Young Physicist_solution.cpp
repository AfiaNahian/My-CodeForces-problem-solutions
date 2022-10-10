#include <iostream>
using namespace std;
int main()
{
    int n,x,y,z,i,cx=0,cy=0,cz=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        cx+=x;
        cy+=y;
        cz+=z;
    }
    if(cx==0 && cy==0 && cz==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

