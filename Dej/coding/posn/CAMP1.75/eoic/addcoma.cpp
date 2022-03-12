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
	char a[120];
	int len,q,i,b;
	scanf("%d",&q);
	while(q--){
        scanf(" %s",a);
        len = strlen(a);
        b = len;
        for(i = 1;i<=len;i++){
            if(b%3==0 && b!=len){
                printf(",");
            }
            printf("%c",a[i-1]);
            b--;
        }
        printf("\n");
	}
    return 0;
}
