#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n,a,b,c=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        b=a/100;
        c+=b;
    }
    c=(c/n)*100;
    std::cout << std::fixed << std::setprecision(12) << c<<endl;
    return 0;
}
