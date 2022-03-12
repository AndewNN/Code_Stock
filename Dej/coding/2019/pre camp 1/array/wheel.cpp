/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[110],ch[110],ans[110],an[110];
int main()
{
    int i,n,k,b,st=0,cou=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&an[i]);
    }
    for(i=0;i<n;i++){
        b = an[i];
        while(b--){
            if(ch[(st+1)%n]){
                st+=1;
                st%=n;
                while(ch[st]){
                    st+=1;
                    st%=n;
                }
            }else{
                st+=1;
            }
            st%=n;
        }
        ch[st]=1;
        cou++;
        ans[i%k]+=a[st];
        while(ch[st] && cou != n){
            st++;
            st%=n;
        }

    }
    for(i=0;i<k;i++){
        printf("%d\n",ans[i]);
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
