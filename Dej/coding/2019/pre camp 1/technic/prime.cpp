/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main()
{
    int i,j,k,n,ch,b;
    scanf("%d",&n);
    a[1]=2;
    a[2]=3;
    j=3;
    for(i=5;j<=n;){
        b = sqrt(i);
        for(k=2,ch=1;a[k]<=b;k++){
            if(i%a[k]==0){
                ch=0;
                i+=2;
                break;
            }
        }
        if(ch){
            a[j] = i;
            j++;
            i +=2;
        }
    }
    printf("%d\n",a[n]);
    return 0;
}
