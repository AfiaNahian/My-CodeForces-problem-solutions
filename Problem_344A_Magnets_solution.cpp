#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[100000];
    int a,b,c=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(int j=0;j<a;j++)
    {
        if(x[j]==x[j+1])
        {
            continue;
        }
        else
        {
            //cout<<j<<' '<<x[j]<<' '<<j+1<<' '<<x[j+1]<<endl;
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
