/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010],b[1010];
int main()
{
    int q,n,i,cou,lb,c;
    scanf("%d",&q);
    while(q--){
        cou = 0;
        lb = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;){
            if(i!= n-1 && a[i]==a[i+1]){
                cou++;
                i+=2;
            }else if(i != n-1 && a[i]!=a[i+1]){
                b[lb]=a[i];
                lb++;
                i+=1;
            }else if(i == n-1){
                b[lb]=a[i];
                lb++;
                break;
            }
        }
        printf("%d\n",cou);
        if(lb>0){
            for(i=0;i<lb;i++){
                printf("%d ",b[i]);
            }
            printf("\n");
        }else{
            printf("Empty\n");
        }
    }
    return 0;
}
