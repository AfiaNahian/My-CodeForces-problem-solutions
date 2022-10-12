#include <iostream>
using namespace std;
int main()
{
    int a,c=0,x,y;
    cin>> a;
    for(int i=0;i<a;i++)
    {
        cin>>x>>y;
        if(y-x>=2)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
