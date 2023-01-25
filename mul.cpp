#include <stdio.h>
int main() {
 int n, i,m;
 printf("Enter an integer: ");
 scanf("%d", &n);
 printf("enter the times to multiply:");
 scanf("%d", &m);
 for (i = 1; i <= m; ++i) {
 printf("%d * %d = %d \n", n, i, n * i);
 }
 return 0;
}
