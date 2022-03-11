#include<bits/stdc++.h>
using namespace std;
int bo[100100],R,s,c,n;
void P(int l,int r){

}
int main()
{
    int q,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d",&n,&c,&R,&s);
        for(i=0;i<c;i++){
            scanf("%d",&bo[i]);
        }
        printf("%d\n",P(1,1<<n));
    }
    return 0;
}
