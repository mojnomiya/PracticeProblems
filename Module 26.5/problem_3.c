#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for(i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
    }
    
    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    
    return 0;
}
