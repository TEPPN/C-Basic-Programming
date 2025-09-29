#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (i == 0 || i == 4 || j == 0 || j == 6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
