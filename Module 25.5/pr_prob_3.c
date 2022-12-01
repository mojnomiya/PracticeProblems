#include <stdio.h>
int isPower(int n, int *ptrp);
int main()
{
    char s[100];
    scanf("%s", s);
    int cost = 0, i, power = 0;
    int *ptrp = &power;
    for (i = 0; s[i] != '\0'; i++)
    {
        cost += s[i] - 96;
    }
    if (isPower(cost, ptrp))
    {
        printf("YES\n");
        printf("cost = 2^%d", power);
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

int isPower(int n, int *ptrp)
{
    for (int i = 1; i <= n; i++)
    {
        if (pow(2, i) == n)
        {
            *ptrp = i;
            return 1;
        }
    }
    return 0;
}