#include <stdio.h>

int main (){
    FILE *fptr;
    int numLines;
    char line[256];
    fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }
    printf("Nhap so dong ban muon ghi vao file: ");
    scanf("%d", &numLines);
    getchar();
    for (int i = 0; i < numLines; i++){
        printf("Nhap noi dung cho dong %d: ", i+1);
        fgets(line, sizeof(line), stdin);
        fprintf(sptr, "s", line);
    }
    fclose(fptr);
    return 0;
}

