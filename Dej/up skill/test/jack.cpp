#include<bits/stdc++.h>
using namespace std;
int node[100100],l[100100],r[100100],mk[100100];
int main()
{
    int i,n,a,run;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        run = 0;
        while(1){
            if(node[run]==0 && mk[run]==0) break;
            if(a < node[run]){
                if(l[run]==0){
                    l[run] = i;
                }else{
                    printf("L");
                    run = l[run];
                }
            }else{
                if(r[run]==0){
                    r[run] = i;
                }else{
                    printf("R");
                    run = r[run];
                }
            }
        }
        node[i] = a;
        mk[i] = 1;
        printf("*\n");
    }
    return 0;
}
