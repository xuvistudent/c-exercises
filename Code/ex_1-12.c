#include <stdio.h>

int main(void)
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t')
        {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
    return 0;
}
