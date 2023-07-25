#include <stdio.h>

int main(void)
{
    int c, nt, nb, nl;
    nt = nb = nl = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            ++nt;
        }
        if(c == ' ')
        {
            ++nb;
        }
        if(c == '\n')
        {
            ++nl;
        }
    }
    printf("Number of tabs: %d\nNumber of blanks: %d\nNumber of lines: %d\n", nt, nb, nl);
}
