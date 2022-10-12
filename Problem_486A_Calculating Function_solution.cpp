#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long int n,a,b,c,i;
    cin>>n;
    if(n%2==0)
       {
           a=n/2;
       }
    else
        {
           a=(n+1)/2*-1;
        }
    cout<<a<<endl;
    return 0;
}
