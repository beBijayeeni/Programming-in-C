/*
0 0 0 0
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4 */
#include <stdio.h>

int main() {
	int i,j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

