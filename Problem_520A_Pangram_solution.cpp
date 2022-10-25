#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int n,a,i,count=0;
    int c[26]={0};
    string p;
    cin>>n;
    cin>>p;
    if(n<26)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        //The ASCII value of the lowercase alphabet is from 97 to 122
        //The ASCII value of the uppercase alphabet is from 65 to 90
        for(i=0;i<n;i++)
        {
            p[i]=tolower(p[i]);
            if(p[i]>=97 && p[i]<=122)
            {
                a = p[i]-97;
                c[a]=1;
            }
        }
        for(i=0;i<26;i++)
        {
            if(c[i]!=0)
            {
                count++;
            }
        }
        if(count>=26)
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

