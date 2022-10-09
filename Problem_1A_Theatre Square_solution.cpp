#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int m,n,a,d,e,output;
    cin>>m>>n>>a;
        if(m%a==0)
         {
           d=m/a;
         }
         else if(m%a!=0)
         {
            d=(m/a)+1;
         }
         if(n%a==0)
         {
             e=n/a;
         }
         else if(n%a!=0)
         {
            e=(n/a)+1;
         }
         output=d*e;
         cout<<output<<endl;
         return 0;
}
