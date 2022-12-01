#include <stdio.h>
void printNum(int n);
int main() {
    int n;
    scanf("%d", &n);
    printNum(n);
    return 0;
}

void printNum(int n)
{
    if(n>0){
        printf("%d ", n);
        printNum(n-1);
    }
}