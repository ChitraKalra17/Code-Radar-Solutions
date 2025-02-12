// Your code here...
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int left = x << y;
    printf("%d", left);
    return 0;
}