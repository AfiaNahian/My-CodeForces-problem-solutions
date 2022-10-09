#include <iostream>
using namespace std;
int main()
{
    int n,i,a,b,c,d=0,count_prog=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        d=a+b+c;
        if(d>=2)
        {
           count_prog++;
        }
    }
    cout<<count_prog;
    return 0;
}
