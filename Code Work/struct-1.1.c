#include<stdio.h>
#include<string.h>
struct A
{
    int n;
    char m[110][21];
};
struct A mis[10100];
char now[20];
int main()
{
    int id,i,j;
    while(1)
    {
        printf("Input a ID of student (negative number to exit) : ");
        scanf("%d",&id);
        if(id<0)
            break;
        printf("What is the lost item? (the name of the item must be written together without spaces) : ");
        scanf(" %s",now);
        printf("\n");
        strcpy(mis[id].m[mis[id].n],now);
        mis[id].n++;
    }
    printf("\n");
    for(i=1; i<10000; i++)
    {
        if(mis[i].n>0)
        {
            printf("Inviting student No.%d to pick up their ",i);
            for(j=0; j<mis[i].n; j++)
            {
                if(mis[i].n>1&&j==mis[i].n-1)
                    printf(" and %s ",mis[i].m[j]);
                else if(mis[i].n==1)
                    printf("%s ",mis[i].m[j]);
                else if(mis[i].n>1&&j==0)
                    printf("%s",mis[i].m[j]);
                else
                    printf(", %s",mis[i].m[j]);
            }
            printf("back.\n");
        }
    }
    return 0;
}
/*

id must be 0 <= id <= 10000
missing item name length must <= 20

343 umbrella
45 shoe
343 glasses
343 hat
65 book
45 key
343 dog
-1

*/
