/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,s,p,l,r,mid,x,y;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&s,&p);
        l=1,r=s/2;
        while(l!=r){
            mid=(l+r)/2;
            x=mid,y=s-mid;
            if(x*y<p)
                l=mid+1;
            else
                r=mid;

        }
        if(l*(s-l)==p)
            printf("%d %d\n",l,s-l);
        else
            printf("No answer");


    }

    return 0;
}
