#include<bits/stdc++.h>
using namespace std;
int readData(char fileName[], char text[][100], int* count) {
    FILE* fp = fopen(fileName, "r");
    if (fp == NULL) {
        printf("Error message\n");
        return -1;
    }
    *count = 0;
    while (fgets(text[*count], 100, fp) != NULL) {
        *count += 1;
    }
    fclose(fp);
    return 1;
}

void changeText(char text[][100], int count) {
    int character;
    // int check;
    for (int i = 0;i < count;i++) {
        // if(i == count-1){
        //   character = strlen(text[i]);  
        // } 
        // else {
        character = strlen(text[i]) - 1;
        // }
        for (int j = 0;j < character;j++) {
            if ((i + 1) % 2 == 0 && text[i][j] != ' ') {
                text[i][j] -= 5;
            }
            else if ((i + 1) % 2 != 0 && text[i][j] != ' ') {
                text[i][j] += 5;
            }
        }
    }
}

int writeData(char fileName[], char text[][100], int count) {
    FILE* fp = fopen(fileName, "w");
    if (fp == NULL) {
        printf("Error message\n");
        return -1;
    }
    for (int i = 0;i < count;i++) {
        printf("%s", text[i]);
        fprintf(fp, "%s", text[i]);
    }
    fclose(fp);
    return 1;
}

int main() {
    char text[20][100];
    int count = 0;
    readData("lyrics.txt", text, &count);
    changeText(text, count);
    writeData("test.txt", text, count);
    return 0;
}