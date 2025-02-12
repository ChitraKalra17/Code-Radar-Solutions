// Your code here...
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int bit = x | y;
    printf("%d", bit);
    return 0;
}