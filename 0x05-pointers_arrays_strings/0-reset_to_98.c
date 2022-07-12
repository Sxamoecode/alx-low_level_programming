#include "main"

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
