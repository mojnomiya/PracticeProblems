#include <stdio.h>

void sort(int arr[], int n);
int largest(int arr[], int n, int k);
int smallest(int arr[], int n, int k);

int main() {
    int n,k,count;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    
    sort(arr, n);
    printf("After sorting in ascending order: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%dth largest element = %d\n", k, largest(arr, n, k));
    printf("%dth smallest element = %d", k, smallest(arr, n, k));
    
    return 0;
}
void sort(int arr[], int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j]){
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int largest(int arr[], int n, int k)
{   
    int kth_largest=0;
    for(int i=n; i>=n-k; i--)
    {
        kth_largest=arr[i];
    }
    return kth_largest;
}

int smallest(int arr[], int n, int k)
{
    int kth_smallest=0;
    for(int i=0; i<k; i++)
    {
        kth_smallest=arr[i];
    }
    return kth_smallest;
}