#include <stdio.h>

/* copy input to output, replacing each tab by \t, 
each backspace by \b, and each backslash by \\ */
int main()
{
    
    int c;

    while ((c = getchar())!= EOF) 
        {
            if (c == '\t')
            {
                printf("\\t");
                c = getchar();
            } 
            if (c == '\b')
            {
                printf("\\b");
                c = getchar();
            }
            if (c == 92)
            {
                printf("\\");
                printf("\\");
                c = getchar();
            }  
        putchar(c);
        }
}