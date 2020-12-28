#include <stdio.h>
#include <string.h>

int main ()
{
   int n;
   scanf("%d", &n);
 printf("%d%d:%d%d", n/60%60/10,  n/60%60%10, n%60/10, n%60%10);

return 0;
}
