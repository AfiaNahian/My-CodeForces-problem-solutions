#include <iostream>
using namespace std;
int main()
{
    long long int a,n,i;
    cin>>a>>n;
    for(i=1;i<=n;i++)
    {
        if(a%10!=0)
        {
            a=a-1;
        }
        else
        {
            a=a/10;
        }
    }
    cout<<a<<endl;
    return 0;
}
