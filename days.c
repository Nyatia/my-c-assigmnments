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
if (day=='M') {
    printf ("Monday\n");
}
else if (day=='T') {
    printf ("Tuesday\n");
}
else if (day=='W') {
    printf ("Wednesday\n");
}
else if (day=='R') {
    printf ("Thursday\n");
}
else if (day=='F') {
    printf ("Friday\n");
}
else if (day=='S') {
    printf ("Saturday\n");
}
else if (day=='U') {
    printf ("Sunday\n");
}
else {
    printf ("Invalid day.\n");
}
return 0;
}