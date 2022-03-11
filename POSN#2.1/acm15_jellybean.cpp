/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{
    int q,j,n,r,c,i,cou,k;
    scanf("%d",&q);
    while(q--)
    {
        cou=0;
        scanf("%d %d",&j,&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&r,&c);
            a[i]=r*c;
        }
        sort(a,a+n);
        for(i=n-1,k=1;i>=0;i--,k++){
            cou+=a[i];
            if(cou>=j){
                printf("%d\n",k);
            break;
            }
        }
        memset(a,0,sizeof a);
    }


    return 0;
}
