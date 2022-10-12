#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char p[105],q[105],r[105];
    int i,a;
    cin>>p;
    cin>>q;
    a=strlen(p);
    for(i=0;i<a;i++)
    {
        if(p[i]==q[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }
    return 0;
}
