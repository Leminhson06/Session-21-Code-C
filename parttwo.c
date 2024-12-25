#include <stdio.h>
//Sử dụng file bt01.txt đã tạo, xây dựng chương trình để in ra màn hình ký tự đầu tiên trong file.
int main(){
    FILE *fptr;
    fptr = fopen("bt01.txt", "r");
    char myText[50];
    fgets(myText, 50, fptr);
    printf("Thong tin trong file text %s", myText);
    fclose(fptr);
    return 0;
}