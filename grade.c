#include <stdio.h>
int main () {
    int grade;
    printf ("Enter your grade: ");
    scanf ("%d", &grade);
    if (grade < 0 || grade > 100) {
        printf ("Error: Invalid grade. Please enter a grade between 0 and 100.\n");
    } 
    else {
        printf ("Your grade is: %d\n", grade);
    }
    if (grade >=50) {
        printf ("pass\n");} 
        else {
            printf ("fail\n");}
    return 0;
}