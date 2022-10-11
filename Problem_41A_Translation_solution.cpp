#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char str1[300],str2[300],c;
	int b,i,up=0,lower=0;
	gets(str1);
	gets(str2);
    b=strlen(str1);
    b=strlen(str1);
    c=strlen(str2);
    if(b!=c)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0;i<b;i++)
        {
            if(str1[i]==str2[b-i-1])
            {
                up++;
            }
            else
            {
                break;
            }
        }
        if(b==up)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
