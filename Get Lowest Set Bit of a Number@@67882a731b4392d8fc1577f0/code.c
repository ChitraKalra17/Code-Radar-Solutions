// Your code here...
#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int lowest = x & -x;
    int position = 1;
    while ((lowest >> = 1) > 0) {
        position ++;
    }
    printf("%d", position);
    return 0;
}