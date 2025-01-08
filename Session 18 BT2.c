#include <stdio.h>

struct sv{
    char name[20];
    int age;
    char phoneNumber[10];
};

int main(){
    struct sv student;
    printf("Nhap ho va ten: ");
    scanf("%s", student.name);
    printf("Nhap tuoi: ");
    scanf("%d", &student.age);
    printf("Nhap sdt: ");
    scanf("%s", student.phoneNumber);
    
    printf("Ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("SDT: %s\n", student.phoneNumber);
    
    
    
    return 0;
}