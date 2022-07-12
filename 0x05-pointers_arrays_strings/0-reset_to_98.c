//#include "main.h"

/**
 * reset_to_98 - reset integer pointed to by n to 98
 * @n: the integer to set
 *
 * Return: void
 */
/*void reset_to_98(int *n)
{
if (n)
*n = 98;
}*/
#include "main.h"

/** assign 98 to n
 * which was 402 before
 */

int main(void)
{
    int n, *ptr_n;

    n = 402;
    printf("n=%d\n", n);
    ptr_n = &n;
    *ptr_n = 'b';
        printf("n=%d\n", n);
    return 0;
}
