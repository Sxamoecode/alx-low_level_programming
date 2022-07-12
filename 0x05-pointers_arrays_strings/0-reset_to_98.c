#include "main.h"


/** assign 98 to n
 * which was 402 before
 */

void reset_to_98(int *n);
{
    int n, *ptr_n;

    n = 402;
    printf("n=%d\n", n);
    ptr_n = &n;
    *ptr_n = 'b';
    	printf("n=%d\n", n);
    return (0);
}
