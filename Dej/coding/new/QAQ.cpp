#include<bits/stdc++.h>
using namespace std;
char a[110];
int main()
{
    int n,i,j,k,l,ans=0;
    scanf(" %s",a);
    l = strlen(a);
    for(i=0;i<l;i++){
        if(a[i]=='Q'){
            for(j=i+1;j<l;j++){
                if(a[j]=='A'){
                    for(k=j+1;k<l;k++){
                        if(a[k]=='Q'){
                            ans++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
