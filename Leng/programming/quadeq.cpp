#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, A, B, C, D, i, j;
    scanf("%d %d %d", &a, &b, &c);
    if (b * b < 4 * a * c)
        printf("No Solution");
    for (i = 1; i <= 100; i++)
        if (a % i == 0){
            A = i, C = a / i;
            for (j = -100; j <= 100; j++){
                if (j == 0)
                    B = 0, D = c/A;
                else if (c % j == 0){
                    B = j, D = c / j;
                }
                if (A * D + B * C == b){
                    if(A==C && B>D)
                        swap(B,D);
                    printf("%d %d %d %d\n", A, B, C, D);
                    return 0;
                }
            }
        }
    printf("No Solution");
    return 0;
}