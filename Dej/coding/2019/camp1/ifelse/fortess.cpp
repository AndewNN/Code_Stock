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
    int i=20,a,b,c;
    while(i--){
        scanf("%d %d",&a,&b);
        c = (a-(2*b))/2;
        if(c<0 || 4*c > a){
        printf("0\n");
        }else{
        printf("%d\n",(b-c)+1);
        }
    }
    return 0;
}
