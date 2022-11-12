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
    int l,m,n,i,j,k,cou,mis=0;
    scanf("%d %d %d",&l,&m,&n);
    while(n--){
        cou=mis=0;
        for(i=0;i<m;i++){
            scanf("%d",&k);
            if(k==0){
                cou--;
            }else {
                cou++;
            }
            if(abs(cou)>l){
                mis=1;
            }
        }
     printf("%d\n",mis);

    }
    return 0;
}
/*



*/
