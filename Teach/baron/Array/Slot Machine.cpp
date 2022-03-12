#include<bits/stdc++.h>
using namespace std;
int a[20][20],*aa[5];
int main(){
    int i,j,k,l,m,n,x,now,ch;
    aa[0]=&i,aa[1]=&j,aa[2]=&k,aa[3]=&l,aa[4]=&m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                for(l=0;l<n;l++)
                    for(m=0;m<n;m++){
                        for(x=0,now=a[i][0],ch=1;x<5;x++)
                            if(a[*aa[x]][x]!=now)
                                ch=0;
                        //if(a[i][0]==a[j][1]&&a[j][1]==a[k][2]&&a[k][2]==a[l][3]&&a[l][3]==a[m][4])
                            if(ch)
                                printf("%d %d %d %d %d\n",i+1,j+1,k+1,l+1,m+1);
                    }
}
/*

4
1 3 1 3 1
3 1 3 1 2
2 2 2 2 1
3 4 4 4 3

*/
