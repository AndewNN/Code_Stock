/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
using namespace std;
int a[1010];
int main()
{
    int n,i,b,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
        if(a[i]==b){
            c++;
        }
    }
    printf("\n%d\n",c);
    return 0;
}
