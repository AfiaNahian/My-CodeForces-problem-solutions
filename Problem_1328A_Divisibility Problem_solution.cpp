#include <iostream>
using namespace std;
int main()
{
    long long int i,a,b,c,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        c=a%b;
        if(c==0)
        {
            cout<<c<<endl;
        }
        else
        {
            c=b-c;
            cout<<c<<endl;
        }

    }
    return 0;
}
