#include <stdio.h>
// Xây dựng chương trình để tạo và ghi vào file bt01.txt một chuỗi bất kỳ do người dùng nhập vào từ bàn phím .
int main (){
    FILE *fptr;
    fptr = fopen("bt01.txt", "w");
    fprintf(fptr, "hello Le Minh Son");
    fclose(fptr);
    return 0;
}

