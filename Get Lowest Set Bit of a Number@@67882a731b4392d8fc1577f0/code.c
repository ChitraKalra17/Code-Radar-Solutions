// Your code here...
#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int lowest = x & -x;
    printf("%d", lowest);
    return 0;
}