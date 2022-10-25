#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main()
{
    char p[105];
    int a,i,flag=0;
    cin>>p;
    a=strlen(p);
    for(i=1;i<a;i++)
    {
        if(p[i]>=97)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<p;
    }
    else
    {
        for(i=0;i<a;i++)
        {
            if(islower(p[i]))
            {
                p[i]=toupper(p[i]);
            }
            else
            {
                p[i]=tolower(p[i]);
            }
        }
        cout<<p;
    }
    return 0;
}
