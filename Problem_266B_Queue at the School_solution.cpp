#include <iostream>
#include <string>
using namespace std;
int main()
{
    int l,n,i,k,j; string s;
    cin>>l>>n;
    cin>>s;
    for(j=0;j<n;j++)
    {
            for(i=0;i<l-1;i++)
            {
                if(s[i]=='B' && s[i+1]=='G')
                {
                    s[i]='G';
                    s[i+1]='B';
                    i++;
                }
            }
    }
    for(k=0;k<l;k++)
    {
        cout<<s[k];
    }
    return 0;
}
