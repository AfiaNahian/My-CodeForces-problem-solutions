#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char p[1000];
    string q="hello";
    int n,m=0,i,j=0;
    cin>>p;
    n=strlen(p);
    for(i=0;i<n;i++)
    {
        if(p[i]==q[j])
        {
            j++;
        }
    }
    if(j==5)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
