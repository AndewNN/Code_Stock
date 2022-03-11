#include<bits/stdc++.h>
using namespace std;
char a[1100],b[1100];
int main()
{
    int l1,l2,i,j,t;
    scanf(" %s %s",a,b);
    l1 = strlen(a);
    l2 = strlen(b);
    if(l1!=l2){
        printf("%d",max(l1,l2));
    }else{
        if(strncmp(a,b,l1)!=0){
            printf("%d",l1);
        }else{
            printf("-1");
        }
    }
    return 0;
}
