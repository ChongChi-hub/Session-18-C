#include <stdio.h>

struct sv{
    char name[20];
    int age;
    char phoneNumber[10];
};

int main(){
    struct sv student = {"Dao_Trong_Tri", 19, "0913444251" };
    printf("Ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("SDT: %s\n", student.phoneNumber);
    
    
    
    return 0;
}