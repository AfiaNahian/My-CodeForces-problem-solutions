#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j,p[5],x=0;
    for(i=0;i<4;i++)
    {
        cin>>p[i];
    }
    sort(p,p+4);
    for(j=0;j<3;j++)
    {
        if(p[j]==p[j+1])
        {
            x++;
        }
    }
    cout<<x;
    return 0;
}
