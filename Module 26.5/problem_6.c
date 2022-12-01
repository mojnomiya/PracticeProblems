#include <stdio.h>
void change_case(char s[]);

int main() {
    char s[100];
    scanf("%s", &s);
    change_case(s);
    printf("%s", s);
    return 0;
}
void change_case(char s[])
{
    for(int i=0; s[i]!='\0'; i++)
    {
        int dv = s[i];
        if(dv%2==0)
            s[i]-=32;
    }
}