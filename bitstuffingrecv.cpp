#include <stdio.h>

int main() {
    int a[120], b[100];
    int n, i, j = 0, count = 0;

    printf("Enter the number of bits: ");
    scanf("%d", &n);

    printf("Enter the stuffed bits (0 or 1):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(a[i] == 1)
            count++;
        else
            count = 0;

        b[j] = a[i];
        j++;

        if(count == 5) {
            i++;        // Skip the stuffed 0
            count = 0;
        }
    }

    printf("\nFrame after De-stuffing:\n");
    for(i = 0; i < j; i++) {
        printf("%d", b[i]);
    }

    return 0;
}