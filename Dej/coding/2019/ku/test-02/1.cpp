#include<bits/stdc++.h>
using namespace std;
char a[110][110];
int main()
{
    int n,i,j,b;
    scanf("%d",&n);
    memset(a,'#',sizeof a);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]=='#'){
                b = j;
                while(a[i][b-1]!='#'){
                    a[i][b-1]='#';
                    a[i][b]='.';
                    b--;
                }
            }
        }
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(a[i][j]=='#'){
                b = i;
                while(a[b+1][j]!='#'){
                    a[b+1][j]='#';
                    a[b][j]='.';
                    b++;
                }
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
5
.....
.#.#.
.###.
...##
#....
*/
