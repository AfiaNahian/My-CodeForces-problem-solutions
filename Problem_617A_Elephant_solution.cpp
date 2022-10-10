#include <iostream>
using namespace std;
int main()
{
    long long int loc,steps=0;
    cin>>loc;
    steps=loc/5;
    if(loc%5==0)
    {
        cout<<steps<<endl;
    }
    else
    {
        steps=steps+1;
        cout<<steps<<endl;
    }
    return 0;
}
