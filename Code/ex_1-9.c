#include <stdio.h>

int main(void)
{
    int char_pre, c;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' && char_pre == ' ')
        {
            ;
        } else {
            putchar(c);
        }
        char_pre = c;
    }
    return 0;
}
