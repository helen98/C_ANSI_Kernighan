#include <stdio.h>

/* count characters in input; 1st and 2nd versions */
int main()
{
    // long nc;

    // nc = 0;
    // while (getchar() != EOF)
    //     ++nc;
    // printf("%ld\n", nc);

    double nc;

    for (nc =0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);

    /* while executing either
    after input Ctrl+d on UNIX or Ctrl+z on Windows */
}