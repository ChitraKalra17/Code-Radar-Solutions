// Your code here...
#include <stdio.h>

int main(){
    int x;
    int y;
    scanf("%d %d", &x, &y);
    x = x & ~(1 << y);
    printf("%d", x);
    return 0;
}