#include <stdio.h>

int sum_arr(int *arr, int n);

int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for(i=0;i<n;i++)
    {
        scanf("%d", (ptr+i));
    }
    printf("%d", sum_arr(ptr, n));
    return 0;
}

int sum_arr(int *arr, int n)
{
    int sum=0, i;
    for(i=0; i<n; i++)
    {
        if(*(arr+i)%10==0)
            sum+= *(arr+i);
    }
    return sum;
}