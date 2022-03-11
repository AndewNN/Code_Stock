#include<bits/stdc++.h>
using namespace std;
int a[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char dd[10][20]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"};
int main(){
    int m,d,i,j,cou=0;
    scanf("%d %d",&d,&m);
    for(i=1;i<=m;i++)
        for(j=1;j<=a[i];j++){
            cou++;
            if(i==m&&j==d){
                printf("%s",dd[(cou+2)%7]);
                return 0;
            }
    }

}

