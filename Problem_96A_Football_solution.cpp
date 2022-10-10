#include <iostream>
#include<string.h>
using namespace std;
int main()
{
  int n,a=0,b;
  char s[200];
  cin>>s;
  for(int i=1;i<strlen(s);i++)
    {
        if(s[i]==s[i-1])
        {
            a++;
            if(a==6)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
             a=0;
        }
    }
  cout<<"NO"<<endl;
  return 0;
}
