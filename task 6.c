#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    for (i=5; i>=1; i--) {
        for (j=1; j<i; j++) {
            printf(" ");
        }
        for (j=i; j<=5; j++) {
            printf("%d", j);
        }
        for (j=5-1; j>=i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

