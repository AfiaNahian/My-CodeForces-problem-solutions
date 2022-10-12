#include <iostream>
using namespace std;
int main()
{
    int a,i,c=0,p;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>p;
        c+=p;
    }
    if(c==0)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }
    return 0;
}
