/**
WRITE A PROGRAM TO PRINT ALL INPUT LINES THAT ARE LONGER THAN 80 CHARACTERS.
*/

#include <stdio.h>
#define MAXLINE 1000

/* getline: read a line into s, return length */
int getLine(char s[], int lim) {
    int c, i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if(c=='\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough*/
void copy(char from[], char to[]){
    int i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}

/* reverse: reverses the input a line at a time */
void reverse(char s[], char d[], int lim) {
   int c, len;
   for(len=0; ((c=getchar()) != '\n') && len < lim-1; ++len) {
        s[len] = c;
   }
   if(c == '\n') {
        s[len] = '\0';
   }
   int i;
   i = 0;
   while((d[i] = s[len-1]) != '\0') {
        ++i;
        --len;
   }
   d[i] = '\0';
}

/* print longest input line */
int main() {
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    char ouput[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}
