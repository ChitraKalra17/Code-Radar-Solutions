// Your code here...
#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", __builtin_clz(x));
    return 0;
}