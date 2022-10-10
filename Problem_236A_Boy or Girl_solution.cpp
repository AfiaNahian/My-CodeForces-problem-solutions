#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int count_unique_char(string str)
{
    int i , c=0;
    sort(str.begin(),str.end());
    for(i=0;i<str.size();i++)
    {
        if(str[i]!=str[i+1])
        {
            c++;
        }
    }
	return c;
}
int main()
{
	string str; int b;
	cin>>str;
	b=count_unique_char(str);
    if(b%2==0)
    {
       cout<<"CHAT WITH HER!"<<"\n";
    }
    else
    {
       cout<<"IGNORE HIM!"<<"\n";
    }
    return 0;
}
