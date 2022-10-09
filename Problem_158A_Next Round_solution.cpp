#include <iostream>
using namespace std;
int main()
{
    int n,a,b[1000],c,d=0,e=0,i,j;
    cin>>n>>a;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    c=b[a-1];
    for(j=0;j<n;j++)
    {
        if((c==0)&&(b[j]==0))
        {
            continue;
        }
        if(b[j]>=c)
        {
            d++;
        }
    }
    cout<<d<<"\n";
    return 0;
}
