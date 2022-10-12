#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,total=0,c=0,sum=0,a[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    sort(a,a+n);
    total=total/2;
    for(i=n-1;i>=0;i--)
    {
        sum+=a[i];
        c++;
        if(sum>total)
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
