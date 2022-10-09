#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
  int n,a=0,b,flag1=0,flag2=0;
  char s[5];
  cin>>n;
  for(int i=0;i<n;i++)
    {
        cin>>s;
        flag1=0;flag2=0;
        for(int j=0;j<strlen(s);j++)
        {
            if(s[j]=='+')
            {
                flag1++;
            }
            else if(s[j]=='-')
            {
                flag2++;
            }
        }
        if(flag1>0)
        {
            a++;
        }
        else if(flag2>0)
        {
            a--;
        }
    }
  cout<<a<<endl;
  return 0;
}
