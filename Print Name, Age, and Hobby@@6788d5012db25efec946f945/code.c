#include <stdio.h>

int main(){
    char[30] name;
    int age;
    char[50] hobby;
    scanf("%29s %d %49s", name, &age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}