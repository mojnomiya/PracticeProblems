#include <stdio.h>
int sum_nnat_number(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int sum = sum_nnat_number(n);
    printf("%d", sum);

    return 0;
}

int sum_nnat_number(int n)
{
    int sum = 0;
    if (n > 0)
    {
        sum += sum_nnat_number(n - 1) + n;
    }
    return sum;
}