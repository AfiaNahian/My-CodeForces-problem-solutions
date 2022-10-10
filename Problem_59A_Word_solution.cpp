#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,n,lower=0,upper=0;
    char str[200];
    cin>>str;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if (islower(str[i]))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(lower>=upper)
    {
        for(j=0;j<n;j++)
        {
             char ch = tolower(str[j]);
             cout << ch;
        }
    }
    else
    {
        for(j=0;j<n;j++)
        {
             char ch = toupper(str[j]);
             cout << ch;
        }
    }
    return 0;
}
