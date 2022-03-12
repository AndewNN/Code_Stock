/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110],b[110];
int main()
{
    int q,n,m,i,j,k,cou=0,ch,l;
    scanf("%d",&q);
    for(k=1;k<=q;k++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0,cou=0;i<n;i++)
            cou+=a[i][i];
        printf("Case #%d: %d",k,cou);
        for(i=0,cou=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                b[j]=a[i][j];
            sort(b,b+n);
            l=b[0];
            for(j=1,ch=1;j<n;j++)
            {
                if(b[j]==l)
                    ch=0;
                l=b[j];
            }
            if(!ch)
                cou++;
        }
        printf(" %d",cou);
        for(j=0,cou=0;j<n;j++)
        {
            for(i=0;i<n;i++)
                b[i]=a[i][j];
            sort(b,b+n);
            l=b[0];
            for(i=1,ch=1;i<n;i++)
            {
                if(b[i]==l)
                    ch=0;
                l=b[i];
            }
            if(!ch)
                cou++;
        }
        printf(" %d\n",cou);



    }



    return 0;
}
/*

3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3

*/
