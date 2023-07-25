/**
 * WRITE A FUNCTION REVERSE THAT REVERSE THE CHARACTER STRING S. USE IT TO WRITE A PROGRAM
 * THAT REVERSES ITS INPUT A LINE AT A TIME.
*/
#include <stdio.h>
#define MAXLINE 1000

/* reverse: reverse the character string s */
int reverse(char s[], char d[], int lim) {
    int c, len;

    if((c = getchar) != EOF) {
        for(len=0; ((c = getchar()) != '\n') && len < lim-1; ++len) {
            s[len] = c;
        }
        if(c == '\n') {
            s[len] = '\0';
        }
        int i = 0;
        while((d[i] = s[len-1]) != '\0') {
            ++i;
            --len;
        }
        d[i] = '\0';
        return 0;
    }
    return -1;
}

int main() {
    char input[MAXLINE]; /* input */
    char output[MAXLINE]; /* output */
    int c;

    while((c = reverse(input, output, MAXLINE)) == 0) {
        printf("%s\n", output);
    }
    return 0;
}