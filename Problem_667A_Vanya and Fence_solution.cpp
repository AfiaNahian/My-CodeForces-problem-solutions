#include <iostream>
using namespace std;
int main()
{
    long int a,b,c=0,i,p;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        cin>>p;
        if(p<=b)
        {
            c+=1;
        }
        else
        {
            c+=2;
        }
    }
    cout<<c<<endl;
    return 0;
}
