#include <stdio.h>
int main(void)
{
// an array with 3 rows and 2 columns.
int x[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } },i,j;
// output each array element's value
for ( i = 0; i < 3; i++) {
for ( j = 0; j < 2; j++) {
printf("Element at x[%d][%d]: ", i, j);
printf("%d\n", x[i][j]);
}
}
return (0);
}
