#include <stdio.h>

int main (){
    FILE *fptr;
    char line[256];
    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    if (fgets(line, sizeof(line), line) != NULL) {
        printf("Dong dau tien trong file bt01.txt la: %s", line);
    } else {
        printf("File rong khong the doc dong dau tien.\n");
    }
    fclose(fptr);
    return 0;
}


