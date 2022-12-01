#include <stdio.h>

int main() {
    int a, b;
    int* ptra=&a, *ptrb=&b;
    scanf("%d %d", ptra, ptrb);
    
    float avg = (*ptra + *ptrb)/2.0;
    printf("%0.3f", avg);

    return 0;
}