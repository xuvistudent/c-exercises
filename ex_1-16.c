#include <stdio.h>
#define MAXLINE 1000

/* getline: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c;
    int i;
    for(i=0; /*(i<lim-1) && */ (c=getchar()) != EOF && c != '\n'; ++i) // arbitrarily long input lines
    {
        s[i] = c;
    }
    if(c=='\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i=0;
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

/* print the longest input line */
int main()
{
    int len; /* current line length */
    int max; /* maximum seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0)
    {
        if(len > max)
        {
            copy(longest, line);
            max = len;
        }
    }
    if(max > 0) /* there was a line */
    {
        printf("The longest length: %d\n", max - 1);
        printf("The longest: %s", longest);
    }
    return 0;
}
