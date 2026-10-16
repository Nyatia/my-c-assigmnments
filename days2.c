#include <stdio.h>
#include <ctype.h>
int main () {
    char day = '\0';
    printf ("[M]Monday\n");
    printf ("[T]Tuesday\n");
    printf ("[W]Wednesday\n");
    printf ("[R]Thursday\n");
    printf ("[F]Friday\n");
    printf ("[S]Saturday\n");
    printf ("[U]Sunday\n");
    printf ("choose a day of the week: ");
    scanf (" %c", &day);
    day = toupper(day);
    switch (day) {
        case 'M':
            printf ("Monday\n");
            break;
        case 'T':
            printf ("Tuesday\n");
            break;
        case 'W':
            printf ("Wednesday\n");
            break;
        case 'R':
            printf ("Thursday\n");
            break;
        case 'F':
            printf ("Friday\n");
            break;
        case 'S':
            printf ("Saturday\n");
            break;
        case 'U':
            printf ("Sunday\n");
            break;
        default:
            printf ("Invalid day.\n");
    }
    return 0;
}