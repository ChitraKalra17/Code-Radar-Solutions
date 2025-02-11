#include <stdio.h>

int main(){
    char[30] name;
    char[50] hobby;
    int age;
    scanf("%29s %d %49s", name, &age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}