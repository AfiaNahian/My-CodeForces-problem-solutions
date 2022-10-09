#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,j;
	string a;
	cin>>a;
	// for loop for stepping
	for(i=0;i<a.size();i+=2)
    {
        //for loop for swapping
        for(j=0;j<a.size()-1;j+=2)
        {
            if(a[j]>a[j+2])
            {
                swap(a[j],a[j+2]);
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
