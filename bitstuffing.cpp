#include <stdio.h>

int main() {
    int a[100], b[120];
    int n, i, j = 0, count = 0;

    printf("Enter the number of bits: ");
    scanf("%d", &n);

    printf("Enter the bits (0 or 1):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        b[j] = a[i];

        if(a[i] == 1)
            count++;
        else
            count = 0;

        if(count == 5) {
            j++;
            b[j] = 0;   // Stuff 0 after five consecutive 1s
            count = 0;
        }

        j++;
    }

    printf("\nFrame after Bit Stuffing:\n");
    for(i = 0; i < j; i++) {
        printf("%d", b[i]);
    }

    return 0;
}