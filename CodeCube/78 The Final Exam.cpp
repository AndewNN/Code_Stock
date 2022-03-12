/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    int n,i,cou=0,m=-1;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        cou+=a[i];
    }
    if(cou==n)
        m=5;
    else
    {
        for(i=0;i<5;i++)
            if(cou-a[i]==n)
            {
                m=i;
                break;
            }
    }
    if(m==-1)
        printf("-1");
    else
    {
        for(i=0;i<5;i++)
        {
            if(m==i)
                printf("0 ");
            else
                printf("%d ",a[i]);
        }
    }
    return 0;
}
