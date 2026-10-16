#include <stdio.h>
#include <math.h>
int main () {
    int a, b;
    printf ("Enter two numbers separated by space: ");
    scanf ("%d %d", &a, &b);
    if (b==0) {
        printf ("Error: Division by zero is not allowed.\n");
    } else {
        printf ("The result of %d divided by %d is: %d\n", a, b, (a%b));
    }
    printf ("Enter two numbers separated by comma: ");
    scanf ("%d,%d", &a, &b);
    if (b==0) {
        printf ("Error: Division by zero is not allowed.\n");
    } else {
        printf ("The result of %d divided by %d is: %d\n", a, b, (a%b));
    }
    printf ("enter two numbers separated by dash: ");
    scanf ("%d-%d", &a, &b);
    if (b==0) {
        printf ("Error: Division by zero is not allowed.\n");
    } else {
        printf ("The result of %d divided by %d is: %d\n", a, b, (a%b));
    }
    return 0;
}