#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int *ptra, *ptrb, *ptrc;
    ptra =&a;
    ptrb =&b;
    ptrc =&c;
    printf("%d", (*ptra + *ptrb + *ptrc));
    return 0;
}
