#include <iostream>
using namespace std;
int main()
{
  long long int a,i,j,k,n=0;
  char x[100];
  cin>>a;
  for(i=0;i<a;i++)
  {
      cin>>x[i];
  }
  for(j=0;j<a;j++)
  {
          if(x[j]==x[j+1])
          {
             n++;
          }
  }
  cout<<n<<endl;
  return 0;
}
