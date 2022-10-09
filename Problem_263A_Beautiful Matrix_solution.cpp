#include <bits/stdc++.h>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{
	int x[6][6],mid_pos;
	for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>x[i][j];
            if(x[i][j]==1)
            {
                mid_pos=abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<mid_pos<<endl;
    return 0;
}
