// Your code here...
#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int lowest = x & -x;
    int position = 0;
    while (lowest > 1) {
        lowest >>=1;
        position ++;
    }
    printf("%d", position);
    return 0;
}