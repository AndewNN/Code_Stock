/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char o[1000];
int main()
{
    int i,sum=0;
    gets(o);
    for(i=0; i<strlen(o); i++)
    {
        if(o[i]!=' ')
        {
            sum*=10,sum+=o[i]-'0';
        }
        else
        {
            printf("%d\n",sum);
            sum=0;
        }

        if(i==strlen(o)-1)
        {
            printf("%d\n",sum);
            sum=0;
        }
    }
    return 0;
}

