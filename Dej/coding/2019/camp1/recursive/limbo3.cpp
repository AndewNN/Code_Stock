/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
char a[1000][1100];
int di[4]= {1,0,-1,0},dj[4]= {0,1,0,-1},cou=0,r,c;
void p(int i,int j)
{
    a[i][j]='.';
    int ii,jj,k;
    for(k=0; k<4; k++)
    {
        ii = i+di[k],jj=j+dj[k];
        if(ii < 0)
        {
            ii = r-1;
        }
            if(jj < 0)
            {
                jj = c-1;
            }
            if(ii >= r)
            {
                ii = 0;
            }
                if(jj >= c)
                {
                    jj = 0;
                }
                if(a[ii][jj]=='*')
                {
                    p(ii,jj);
                }
            }
        }
int main()
{
    int i,j,ma=0;
    scanf("%d %d",&c,&r);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]=='*')
            {
                cou++;
                p(i,j);
            }
        }
    }
    printf("%d\n",cou);
    return 0;
}
