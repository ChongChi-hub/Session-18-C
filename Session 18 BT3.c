#include <stdio.h>

struct sv {
    char name[20];
    int age;
    char phoneNumber[10];
};

int main() {
    int size = 5;
    struct sv students[size];

    for (int i = 0; i < size; i++) {
        printf("Nhap ho va ten sinh vien thu %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Nhap tuoi sinh vien thu %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Nhap sdt sinh vien thu %d: ", i + 1);
        scanf("%s", students[i].phoneNumber);
    }

    for (int i = 0; i < size; i++) {
        printf("\nThong tin sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s\n", students[i].phoneNumber);
    }

    return 0;
}
