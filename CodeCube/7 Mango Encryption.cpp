/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char a[1001000],b[1001000];
int aa[1001000],bb[1001000],ans[1001000];
int main()
{
    int len,i;
    scanf(" %s %s",a,b);
    if(strlen(a)!=strlen(b)){
        printf("R.I.P.");
        return 0;
    }
    len=strlen(a);
    for(i=0;i<len;i++)
        aa[i]=tolower(a[i])-'a',bb[i]=tolower(b[i])-'a';
    for(i=0;i<len;i++)
    {
        if(aa[i]-bb[i]>=0 && aa[i]-bb[i]<=9)
            ans[i]=aa[i]-bb[i];
        else if(aa[i]+26-bb[i]>=0 && aa[i]+26-bb[i]<=9)
            ans[i]=aa[i]+26-bb[i];
        else{
            printf("R.I.P.");
            return 0;
        }
    }
    printf("\n");
    for(i=0;i<len;i++)
        printf("%d",ans[i]);

    return 0;
}
