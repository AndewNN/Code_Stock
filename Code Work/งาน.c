#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int addSum(int num1, int num2);
int main()
struct moneystc{
	int moneyb ;
};
{
	struct moneystc s1;
    int i=0;
    int j=0;
    int moneypay = 0;
    int money[5][3] = {{0,0},{0,0}, {0,0}, {0,0}, {0,0}};
    int Out = 0;
    char Name[8][110] = {"Marketing","Accounting","HR","Public Relation","Sales"};
    int Date;
    char k="";
    char h="";
    char l="";
    char p="";
    char opr[10];
    int t;

    printf("Input Day of the month  : ");
    scanf("%d",&Date);

    for (i = 0; i < 5; i++){
            printf("Name of department %d is %s\n",i+1,Name[i]);
    }
    while(1){
        printf("User ID : ");
        scanf(" %s",opr);
        if(opr[0]=='-'&&opr[1]=='1')
            break;
        t=0;
        for(i=0;i<3;i++){
            t+=(opr[i]-'0')*(int)(pow(10,2-i)+0.1);
        }
        if(t<=100)       printf("Year 60 ");
        else if(t<=180)  printf("Year 61 ");
        else if(t<=250)  printf("Year 62 ");
        else             printf("Year 63 ");
        printf("Department : %s ",Name[opr[4]-'0'-1]);
        printf((opr[5]-'0')==1? "Male\n" : "Girl\n");
    }
    for (i = 0; i < 5; i++){
        for (j=0;j < Date;j++){
                printf("[ Income ] payment in department %s Day %d    : ",Name[i],j +1);
                scanf("%d",&s1.moneyb);
                if (s1.moneyb >0)
                    printf("Pass");
                        else
                    printf("Not Pass");
                moneypay= s1.moneyb;
                money[i][0] = addSum(money[i][0],moneypay);
                 printf("\n[  Out   ] payment in department %s Day %d    : ",Name[i],j+1);
                scanf("%d",&Out);
                if (Out >0)
                    printf("Pass");
                    else
                    printf("Not Pass");
                money[i][1] = addSum(money[i][1],Out);
                printf("\nincome list 1 : ");
                scanf("%s",&k);
                printf("income list 2 : ");
                scanf("%s",&l);
                printf("expenditure of list : ");
                scanf("%s",&h);
                printf("expenditure of list :");
                scanf("%s",&p);

        }

    }
    for (i =0; i < 5;i++){
            printf("department %s : [ Result income : %d ][Result Out :%d]\n",Name[i],money[i][0],money[i][1]);
    }
}

int addSum(int num1, int num2)         // function definition
{
    int result;
    result = num1+num2;
    return result;                  // return statement
}
