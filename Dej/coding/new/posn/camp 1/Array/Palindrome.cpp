/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char B[50020],A[50020];
int main()
{
    int a,len,x=1,k,p=0,z=0,i;
    scanf("%d\n",&a);
    for(int z=0; z<a; z++)
    {
        x=1;
        gets(A);
        len = strlen(A);
        p =0;
        for(int l=0; l<len; l++)
        {
            if(isalnum(A[l]))
            {
                B[p]=A[l];
                p++;
            }
        }
        len = p;
        B[p] = '\0';
        for(int h=0; h<=len; h++)
        {
            B[h] = tolower(B[h]);
        }
        for(int i=0; i<len/2; i++)
        {
            if(B[i]!=B[len-i-1])
                {
                    //printf("eiei");
                x=0;
            }
        }
        if(x)
        {
            for(int i=0;i<len/4;i++){
                if(B[i]!=B[len/2-i-1]){
                    x=0;
                }
            }
            if(!x){
                printf("Palindrome");
            }
            else{
                printf("Double Palindrome");
            }
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
/*
3
A72Bb27A
aB3Ba5ab3Ba
aB4*/
