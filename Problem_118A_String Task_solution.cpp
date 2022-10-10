#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char str[300],c; int b,i; bool isLowercaseVowel, isUppercaseVowel;
	gets(str);
    b=strlen(str);
    for(i=0;i<b;i++)
    {
        c=str[i];
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c=='y');
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'||c=='Y');
        if (isLowercaseVowel || isUppercaseVowel)
           {
                continue;
           }
        else
            {
                char ch = tolower(c);
                cout <<"."<<ch;
            }
    }
    return 0;
}
