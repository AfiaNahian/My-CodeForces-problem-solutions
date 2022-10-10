#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a,b,c;
    char array1[10000];
    cin>>array1;
    if (islower(array1[0]))
         {
              array1[0] = array1[0] - 32;
         }
    cout<<array1;
    return 0;
}
