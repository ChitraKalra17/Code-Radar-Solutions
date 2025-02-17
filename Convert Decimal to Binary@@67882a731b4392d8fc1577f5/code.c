// Your code here...
#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if (x == 0) {
        printf("0\n");
        return 0;
    }
    
    int bits[32];
    int i = 0;
    while (x > 0) {
        bits[i] = x & 1;
        x = x >> 1;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");
    return 0;
}