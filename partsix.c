#include <stdio.h>

int main(){
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the no file bt01.txt\n");
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}


