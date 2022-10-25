#include <iostream>
using namespace std;
int main()
{
    int n,i,a,g[5]={0},num_t=0,remain;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        g[a]++;
    }
    num_t+=g[4]; //group of 4 people allocated
    num_t+=g[3]; //group of 3 people allocated
    g[1]=g[1]-g[3];
    if(g[1]<0)
    {
        g[1]=0;
    }
    if(g[2]%2==0)
    {
        num_t+=g[2]/2;
        g[2]=0;
    }
    else
    {
        num_t+=g[2]/2;
        g[2]=1;
    }
    remain=g[2]*2+g[1];
    if(remain%4==0)
    {
        num_t+=(remain/4);
    }
    else
    {
        num_t+=(remain/4)+1;
    }
    cout<<num_t<<endl;
    return 0;
}
