#include<bits/stdc++.h>
using namespace std;
struct A{
    char str;
    int id;
    bool operator < (const A & o) const{
        if(str != o.str) return str > o.str;
        else   return id < o.id;
    }
};
char a[100100],b[100100],st[100100];
int mk[100100];
priority_queue<A> hp;
int main()
{
    int n,i,cou,co=0;
    scanf("%d",&n);
    scanf(" %s",st);
    cou = n/2;
    for(i=0;i<n;i++){
        hp.push({st[i],i});
    }
    for(i=n-1;cou--;){
        while(mk[i]!=0){
            i--;
        }
        mk[i]=1;
        b[co] = st[i];
        while(!hp.empty()){
            if(mk[hp.top().id]==1){
                hp.pop();
            }else{
                mk[hp.top().id]=1;
                a[co] = st[hp.top().id];
                hp.pop();
                break;
            }
        }
        co++;
    }
    if(strncmp(a,b,co)<0){
        printf("YES\n");
        for(i=0;i<co;i++){
            printf("%c",a[i]);
        }
    }else{
        printf("NO\n");
        for(i=0;i<co;i++){
            printf("%c",a[i]);
        }
    }
    return 0;
}
