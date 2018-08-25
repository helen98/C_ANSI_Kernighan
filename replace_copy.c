#include <stdio.h>

/* copy input to output, replacing each string of 
one or more blanks by a single blank */
int main()
{
    int c;

    while ((c = getchar())!= EOF) 
        {
            if (c == ' ')
            {
                putchar(c);
                while (c == ' ')
                {
                    c = getchar();
                }
            }  
        putchar(c);
        }
}