#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    scanf("%d",&i);
    while(i>0){
        if(i>=1000)  printf("M"),i-=1000;
        else if(i>=900)   printf("CM"),i-=900;
        else if(i>=500)   printf("D"),i-=500;
        else if(i>=400)   printf("CD"),i-=400;
        else if(i>=100)   printf("C"),i-=100;
        else if(i>=90)   printf("XC"),i-=90;
        else if(i>=50)   printf("L"),i-=50;
        else if(i>=40)   printf("XL"),i-=40;
        else if(i>=10)   printf("X"),i-=10;
        else if(i>=9)   printf("IX"),i-=9;
        else if(i>=5)   printf("V"),i-=5;
        else if(i>=4)   printf("IV"),i-=4;
        else if(i>=1)   printf("I"),i-=1;

    }
    return 0;

}
