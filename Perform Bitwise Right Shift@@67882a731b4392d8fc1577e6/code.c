// Your code here...
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int right = x >> y;
    printf("%d", right);
    return 0;
}