#include<bits/stdc++.h>
using namespace std;
char ans[100],a;
int to10(char* a,int x){
    int i=0,aa=0;
    // printf("in: %s\n",a);
    for(i=strlen(a)-1;i>=0;i--){
        if(isdigit(a[i]))
            aa += atoi(a[i]) * pow(x,strlen(a)-1-i);
        else
            aa += (10 + 'A'-a[i]) * pow(x,strlen(a)-1-i);
    }
    return aa;
}
void toX(int s,int x){
    int i=0;
    while(s>0){
        if(s%x<10)
            ans[i++] = s%x+'0';
        else
            ans[i++] = (s%x) -10+'A';
        s /= x;
    }
}
int main(){
    int x,s,aa,bb,i;
    to10("123",5);
    char a[10],b[10];
    scanf("%d %s %s",&x,a,b);
    s = to10(a,x) + to10(b,x);
    toX(s,x);
    printf("%d\n%s",s,ans);
}