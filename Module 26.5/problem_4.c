#include <stdio.h>

float area_circle(int r);

int main()
{
    int r;
    scanf("%d", &r);
    printf("%f", area_circle(r));
    return 0;
}

float area_circle(int r)
{
    return (3.1416 * r * r);
}