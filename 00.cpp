#include <math.h>
#include <stdio.h>
using namespace std;
int x = -1, y, z;
double ans;
bool input() {
    printf("Enter the X, Y, Z value (0 0 0 to exit): ");
    scanf("%d %d %d", &x, &y, &z);
    if (x == 0 && y == 0 && z == 0) return false;
    return true;
}
void output() {
    ans = sqrt(x * x + y * y + z * z);
    printf("Lenght of vector (%d %d %d) is %.2lf\n", x, y, z, ans);
}
int main() {
    while (input()) {
        output();
    }
    printf("End of program. Goodbye.\n");
    return 0;
}
