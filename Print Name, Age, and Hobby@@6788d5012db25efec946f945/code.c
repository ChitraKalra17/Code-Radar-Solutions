#include <stdio.h>

int main(){
    char[30] name;
    char[50] hobby;
    int age;
    scanf("%29s %d %49s", name, &age, hobby);
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hobby);
    return 0;
}