#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arrOne[100], arrTwo[100], arrMerge[200];
	int a,sizeOne, sizeTwo, i,j,k,p,c=0;
	cin>>a;
	cin>>sizeOne;
	for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
	cin>>sizeTwo;
    k = i;
	for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    sort(arrMerge, arrMerge+k);
    for(j=0;j<k;j++)
    {
        if(arrMerge[j]!=arrMerge[j+1])
        {
            c++;
        }
    }
    //cout<<c<<endl;
    if(c==a)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
