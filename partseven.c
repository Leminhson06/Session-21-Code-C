#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

// Định nghĩa cấu trúc sinh viên
struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
};

int main() {
    int n, i;
    FILE *file;

    // Yêu cầu người dùng nhập số lượng sinh viên
    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);

    // Tạo mảng để lưu thông tin sinh viên
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Không thể cấp phát bộ nhớ.\n");
        return 1;
    }

    // Nhập thông tin từng sinh viên
    for (i = 0; i < n; i++) {
        printf("Nhập thông tin cho sinh viên %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Tên: ");
        getchar(); // Đọc ký tự newline còn lại
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        // Xóa ký tự newline ở cuối tên
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Tuổi: ");
        scanf("%d", &students[i].age);
    }

    // Mở file students.txt để ghi
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Không thể mở file students.txt để ghi.\n");
        free(students);
        return 1;
    }

    // Ghi thông tin sinh viên vào file
    for (i = 0; i < n; i++) {
        fprintf(file, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
    }

    // Đóng file và giải phóng bộ nhớ
    fclose(file);
    free(students);

    printf("Thông tin sinh viên đã được lưu vào file students.txt thành công.\n");
    return 0;
}
