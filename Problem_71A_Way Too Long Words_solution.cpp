#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,n,l1,l2,l;
    char str1[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str1;
        l1=strlen(str1);
        if(l1<=10)
        {
            cout<<str1<<"\n";
        }
        else
        {
            l2=l1-2;
            cout<<str1[0]<<l2<<str1[l1-1]<<"\n";
        }
    }
    return 0;
}
