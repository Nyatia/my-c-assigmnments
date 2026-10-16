#include <stdio.h>
int main () {
    int number;
    printf ("Enter a number: ");
    scanf ("%d", &number);
    if (number==0) {
        printf ("The number is zero.\n");
    }
    else if (number>=0 && number %2==0) {
        printf ("The number is positive and even.\n");
    }
    else if (number>=0 && number %2!=0) {
        printf ("The number is positive and odd.\n");
    }
    else if (number<0 && number %2==0) {
        printf ("The number is negative and even.\n");
    }
        else if (number<0 && number %2!=0) {
            printf ("The number is negative and odd.\n");}
    return 0;}
