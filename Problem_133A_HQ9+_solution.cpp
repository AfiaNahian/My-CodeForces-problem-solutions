#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,n,flag=0;
    char str[200];
    cin>>str;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            flag=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
    }
    return 0;
}
