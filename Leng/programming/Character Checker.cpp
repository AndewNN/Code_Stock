#include<bits/stdc++.h>
using namespace std;
char a[10010];
int main(){
    int i,n=0;
    scanf(" %s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A'&&a[i]<='Z')
            n++;
    }
    //printf((!ch)?"Mix":(n?"All Capital Letter":"All Small Letter"));

    if(!n)
        printf("All Small Letter");
    else if(n<strlen(a))
        printf("Mix");
    else
        printf("All Capital Letter");

}

