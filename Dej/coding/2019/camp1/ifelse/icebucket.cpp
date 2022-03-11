/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
using namespace std;
int main()
{
    int q,a,b,c;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        if(b==1){
            printf("%d\n",(a-100)/10);
        }else{
            c = ((b-1)*100)+10;
            if(a%c>100){
                printf("%d",a/c+1);
            }else{
                printf("%d",a/c);
            }
        }
    }
    return 0;
}
