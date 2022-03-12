#include<bits/stdc++.h>
using namespace std;
char a[1100];
int main()
{
    int len,i,st=0,b,j,co;
    scanf(" %s",a);
    len = strlen(a);
    a[len] = a[len+1] = '0';
    for(i=0; i<len; i++)
    {
        if(i == 0)
        {
            printf("x");
            if(a[0]=='?')
            {
                j = i+1;
                co=0;
                while(a[j]!='1'){
                    j++;
                    co++;
                }
                if(a[j]=='2'){
                    if(co%2==0){
                        st = 0;
                    }else{
                        st = 1;
                    }
                }else{
                    if(co%2==1){
                        st = 0;
                    }else{
                        st = 1;
                    }
                }
            }
            else
            {
                st = a[0]-'0';
            }
        }
        else
        {
            if(a[i]=='0' || a[i]== '1' || a[i]== '2')
            {
                b = a[i]-'0';
                if(st == 0 || b == 0)
                {
                    printf(".x");
                    st = b;
                }
                else
                {
                    printf("-x");
                    st = b-1;
                }
                st = max(st,0);
            }
            else
            {
                if(st == 1)
                {
                    printf("-x");
                }
                else
                {
                    printf(".x");
                }
                j = i+1;
                co=0;
                while(a[j]!='1'){
                    j++;
                    co++;
                }
                if(a[j]=='2'){
                    if(co%2==0){
                        st = 0;
                    }else{
                        st = 1;
                    }
                }else{
                    if(co%2==1){
                        st = 0;
                    }else{
                        st = 1;
                    }
                }
            }
        }
    }
    return 0;
}
