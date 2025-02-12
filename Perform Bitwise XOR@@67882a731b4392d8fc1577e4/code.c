// Your code here...
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int or = x ^ y;
    printf("%d", or);
    return 0;
}