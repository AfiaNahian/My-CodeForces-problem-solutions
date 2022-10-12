#include <iostream>
using namespace std;
int main()
{
    long long int n,k,placeholder,odd_nums;
    cin>>n>>k;
    if(n%2==0)
    {
        odd_nums=n/2;
    }
    else
    {
        odd_nums=(n/2)+1;
    }

    if(k>odd_nums)
    {
        placeholder=(k-odd_nums)*2;
    }
    else
    {
        placeholder=(k*2)-1;
    }
    cout<<placeholder<<endl;
    return 0;
}
