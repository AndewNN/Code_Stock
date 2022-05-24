#include<bits/stdc++.h>
using namespace std;
char line[30][100];
int readData(char fileName[]) {
    FILE* pIn = fopen(fileName, "r");
    if (pIn == NULL) {
        printf("Error message\n");
        return -1;
    }
    int number = 0;
    char dummy[100];
    while (!feof(pIn)) {
        fscanf(pIn, "%d %[^\n]", &number, dummy);
        strcpy(line[number - 1], dummy);
    }
    fclose(pIn);
    return 1;
}
int writeData(char fileName[]) {
    FILE* pOut = fopen(fileName, "w");
    if (pOut == NULL) {
        printf("Error message\n");
        return -1;
    }
    fprintf(pOut, "--64011111111 Tony Stark--\n", line[27]);
    for (int i = 0;i < 27;i++) {
        fprintf(pOut, "%s\n", line[i]);
    }
    fclose(pOut);
    return 1;
}
int main() {
    readData("lyrics.txt");
    for (int i = 0;i < 27;i++) {
        printf("%s\n", line[i]);
    }
    writeData("Output.txt");

}