#include <stdio.h>

int main(){
    char name[];
    int age;
    char hobby[];
    scanf("%29s %d %49s", name, &age, hobby);
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hobby);
    return 0;
}