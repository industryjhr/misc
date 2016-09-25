#include <stdio.h>

int main(void)
{
    int i;
    double d;
    char c;

    printf("The size of an int in bytes is: %lu.\n", (unsigned long)sizeof(i)); // casted to an unsigned long
    printf("The size of a double in bytes is: %lu.\n", (unsigned long)sizeof(d)); // %lu formats unsigned long
    printf("The size of a char in bytes is: %lu.\n", (unsigned long)sizeof(c));

    return(0);
}
