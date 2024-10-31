/*
0 1 2 3 4
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8 */
#include <stdio.h>

int main() {
	int i,j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }
    return 0;
}

