#include <iostream>
using namespace std;
int main()
{
    long long int a,b=0,c=0,i,x,y;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x>>y;
        b-=x;
        b+=y;
        if(c<b)
        {
            c=b;
        }
    }
    cout<<c<<endl;
    return 0;
}
