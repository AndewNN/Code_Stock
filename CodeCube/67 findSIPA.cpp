/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int ma[1010];
char a[1010],b[1010];
int main()
{

    int i,j,n,len,cou=0;
    scanf(" %s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
        b[i]=tolower(a[i]);
    for(i=0;i<n;i++)
        if(b[i]=='s'&&b[i+1]=='i'&&b[i+2]=='p'&&b[i+3]=='a')
            ma[i]=1,cou++;
    for(i=0;i<n;i++)
    {
        if(ma[i]){
            printf("\"");
            for(j=0;j<4;j++,i++)
                printf("%c",a[i]);
            printf("\"");
            i--;
        }
        else
            printf("%c",a[i]);
    }
    printf("\n%d",cou);
    return 0;
}
