#include <iostream>
using namespace std;
int main()
{
    long long int a,b=0,c=0,i;
    char x[100000];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x[i];
        if(x[i]=='A')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if(b==c)
    {
        cout<<"Friendship"<<endl;
    }
    else if(b>c)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
         cout<<"Danik"<<endl;
    }
    return 0;
}
