#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float average = float(a+b+c)/3;
    printf("Average: %.2f\n", average);
    return 0;
}