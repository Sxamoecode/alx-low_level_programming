include  "main.h"

 
/* Function to print a string */
void _puts_recursion(char *s)
{
   if (*s == '\0')
   {
       putchar('\n');
       return;
   }
   _putchar(*s);
   _puts_recursion(s + 1);
}
