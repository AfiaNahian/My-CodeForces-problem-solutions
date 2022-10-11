#include <iostream>
#include <sstream>
#include<string.h>
using namespace std;
int main()
{
  long long int num ,n,i,lucky=0;char str[200];
  cin>>num;
  stringstream ss;
  ss << num;
  ss >> str;
  n=strlen(str);
  for(i=0;i<n;i++)
  {
      if(str[i]=='4'||str[i]=='7')
      {
          lucky++;
      }
  }
  if(lucky==4 || lucky==7)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
  return 0;
}
