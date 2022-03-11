/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q=20,a,b,c;
    while(q--){
        scanf("%d %d",&a,&b);
        c = (a-(2*b))/2;
        if(c<0){
            printf("0\n");
        }else if(c>b){
            printf("0\n");
        }else{
        printf("%d\n",(a-4*c)/2+1);
        }
    }
    return 0;
}
