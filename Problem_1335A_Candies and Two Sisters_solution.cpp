#include <iostream>
using namespace std;
int main()
{
    long long int t,i,a,b,c=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        if(a==1 || a==2)
        {
            cout<<0<<endl;
        }
        else
        {
            a=(a-1)/2;
            cout<<a<<endl;
        }
    }
    return 0;
}
