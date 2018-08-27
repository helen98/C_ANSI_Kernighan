#include <stdio.h>

#define IN    0     /* inside a word */
#define OUT   1     /* outside a word */

/* print input one word per line */
int main()
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {        
        if (c == ' ' || c == '\n' || c == '\t')
            {
                if (state == IN)
                {
                    printf("\n");
                    state = OUT;
                }                
               
            }            
        else
        {
            putchar(c);
            state = IN;
        }

        
    }
}