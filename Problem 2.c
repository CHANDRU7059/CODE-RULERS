
#include <stdio.h>

int main() {
    int n, a, r, rc;
    float p;

    printf("Enter the total no of classes: ");
    scanf("%d", &n);

    printf("\nEnter the no of classes attended: ");
    scanf("%d", &a);

    p = ((float)a / n) * 100;

    r = 0.75 * n;

    printf("\nAttendance percentage: %.2f", p);

    if (p >= 75) {
        printf("\nStatus: Eligible");
    } else {
        printf("\nStatus: Not eligible");
        rc = r - a;
        printf("\nAdditional classes required: %d", rc);
    }

    return 0;
}

