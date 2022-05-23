#include "../main.h"
#include <stdio.h>

int main(void)
{
    /* %c %s %% %d %i*/


    _printf("Trying the new project out\n");
    printf("Trying the new project out\n");

    _printf("My grade is %c\n", 'A');
    printf("My grade is %c\n", 'A');

    _printf("My favourite color is: %s\n", "Blue");
    printf("My favourite color is: %s\n", "Blue");

    n = _printf("%%\n");
    printf("n: %d\n", n);

    n = printf("%%\n");
    printf("n: %d\n", n);


	return (0);
}
