#include <stdio.h>

int main(){
    char[30] name;
    int age;
    char[50] hobby;
    scanf("%30s %d %50s", &name, &hobby);
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hobby);
    return 0;
}