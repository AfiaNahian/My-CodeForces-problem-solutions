#include <iostream>
using namespace std;
int main()
{
    int n,a[100000],i,c=1,mc=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            c++;
        }
        else
        {
            c=1;
        }
        if(c>mc)
        {
            mc=c;
        }
    }
    cout<<mc<<endl;
    return 0;
}
