/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
using namespace std;
int a[110],ch[110],p[20];
int main()
{
    int i,j,n,k,b,st=0,cou=0;
    scanf("%d %d",&n,&k);
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n;i++){
        scanf("%d",&b);
        while(b-- && i!=n-1){
            if(ch[st]){
                b++;
                st++;
            }else{
                st++;
            }
            st%=n;
        }
        while(ch[st]){
            st++;
            st%=n;
        }
        ch[st] = 1;
        p[i%k] += a[st];
        st++;
        st%=n;
        while(ch[st] && i!= n-1){
            st++;
            st%=n;
        }
    }
    for(i=0;i<k;i++){
        printf("%d\n",p[i]);
    }
    return 0;
}
/*
5 3
3
5
2
4
1
3
5
1
2
1
*/
