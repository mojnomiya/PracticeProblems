#include <stdio.h>
void sort(int *arr, int n);
void swap(int *a, int *b);
int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = &arr[0];
    for(i=0; i<n; i++)
    
    sort(ptr, n);
    
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void sort(int *arr, int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j]){
                int *a = &arr[i], *b = &arr[j];
                swap(a,b);
            }
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// #include <stdio.h>
// void sort(int *arr, int n);

// int main() {
//     int n,i;
//     scanf("%d", &n);
//     int arr[n];
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int *ptr = &arr[0];
//     for(i=0; i<n; i++)
//     sort(ptr, n);
    
//     for(i=0; i<n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }

// void sort(int *arr, int n)
// {
//     int temp;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i]>arr[j]){
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
