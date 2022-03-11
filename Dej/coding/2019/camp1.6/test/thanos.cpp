#include<bits/stdc++.h>
using namespace std;
char a[3100][3100];
int b[3100];
queue<pair<int,int> > q;
int main()
{
    int r,c,i,j,ch=1,h,mi=100000,cou;
    scanf("%d %d",&r,&c);
    for(i=1;i<=3000;i++){
        b[i] = 100000;
    }
    for(i=1;i<=r;i++){
        scanf(" %s",a[i]+1);
        for(j=1;j<=c;j++){
//            scanf(" %c",&a[i][j]);
            if(a[i][j]=='#'){
                if(i < b[j]){
                    b[j] = i;
                }
            }
        }
    }
    for(i=r;i>=1;i--){
        for(j=c;j>=1;j--){
            if(a[i][j]=='X'){
                q.push({i,j});
                if(a[i+1][j]!='X'){
                    cou = (b[j]-i-1);
                    mi = min(mi,cou);
                }
            }
        }
    }
    while(!q.empty()){
        i = q.front().first;
        j = q.front().second;
        q.pop();
        a[i][j] = '.';
        a[i+mi][j] = 'X';
    }
    for(i=1;i<=r;i++){
        printf("%s\n",a[i]+1);
    }
    return 0;
}
