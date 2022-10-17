#include <iostream>
using namespace std;
int main()
{
    int a,x[105];
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(int j=1;j<=a;j++)
    {
        for(int k=0;k<a;k++)
        {
            if(x[k]==j)
            {
                cout<<k+1<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
