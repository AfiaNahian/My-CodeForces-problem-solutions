#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    for(i=1;i<a;i++)
    {
        if(i%2==1)
        {
           cout<<"I hate that ";
        }
        if(i%2==0)
        {
           cout<<"I love that ";
        }
    }
    if(a%2==0)
    {
        cout<<"I love it";
    }
    else
    {
        cout<<"I hate it";
    }
    return 0;
}
