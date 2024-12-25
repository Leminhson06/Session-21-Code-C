#include <stdio.h>
//Sử dụng file bt01.txt đã tạo, xây dựng chương trình để ghi thêm vào file một chuỗi bất kỳ do người dùng nhập vào.
int main(){
    FILE *fptr;
    char str[100];
    fptr = fopen("bt01.txt", "a");
    if(fptr=NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    printf("Nhap chuoi ban muon nhap vao file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(fptr,"%s", str);
    fclose(fptr);
    return 0;
}
    
