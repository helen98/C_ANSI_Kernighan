#include <stdio.h>

/* print a histogram of the frequencies of 
diffetent characters in its input */
int main()
{
    int c, i, j;
    int freq [96]; /* 128 ascii values - 32 that do not interest us */
    
    /* set array values to 0s */
    for (i = 0; i < 96; i++)
        freq[i] = 0;
    
    /* count how many times char appears in input, store in array */
    while ((c = getchar()) != EOF)
    {
        ++freq[c - 32];
    }
    
    /* print histogram */
    printf("\n");
    for (i = 0; i < 96; ++i)
        if (freq[i] > 0)
            {
                printf("%c", (i + 32));
                for(j = 0; j < freq[i]; ++j)
                    printf("*");
                printf("\n");
            }
}