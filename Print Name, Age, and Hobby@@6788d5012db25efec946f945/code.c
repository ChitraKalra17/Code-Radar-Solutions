#include <stdio.h>

int main(){
    char name[30];
    int age;
    char hobby[50];
    scanf("%29s %d %49s", name, &age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}