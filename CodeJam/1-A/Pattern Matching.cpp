/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int len[55];
char a[55][110],tmp[110];
int main()
{
    int t,n,l,m,i,j;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf(" %s",tmp);
            l=strlen(tmp);
            for(j=0,m=l-1;j<l-1;j++,m--)
                a[i][j]=tmp[m];
            printf("%s\n",a[i]);

        }

    }



    return 0;
}
