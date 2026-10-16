#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main() {
char choice;
char op;
double num1, num2, result;
do {
printf ("[B] Binary Operations\n");
printf ("[U] Unary Operations\n");
printf ("[E] Exit the program\n");
printf ("Enter your choice: ");
scanf (" %c", &choice);
choice = toupper(choice);
switch (choice) {
case 'B':
printf ("you have chosen Binary Operations\n");
printf ("[+] addition\n");
printf ("[-] subtraction\n");
printf ("[*] multiplication\n");
printf ("[/] division\n");
printf ("[%] remainder\n");
printf ("[P] power\n");
printf ("[X] maximum\n");
printf ("[I] minimum\n");
printf ("Enter the operator: ");
scanf (" %c", &op);
op = toupper(op);
printf ("Enter num1: ");
scanf ("%lf", &num1);
printf ("Enter num2: "); 
scanf ("%lf", &num2);
choice=toupper(choice);
switch (op) {
    case '+':
        result = num1 + num2;
        printf ("Result: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf ("Result: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf ("Result: %.2lf\n", result);
        break;  
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            printf ("Result: %.2lf\n", result);
        } else {
            printf ("Error: Division by zero is not allowed.Goodbye!\n");
        }
        break;
    case '%':
        if ((int)num2 != 0) {
            result = (int)num1 % (int)num2;
            printf ("Result: %.2lf\n", result);
        } else {
            printf ("Error: Division by zero is not allowed.Goodbye!\n");
        }
    case 'P':
        result = pow(num1, num2);
        printf ("Result: %.2lf\n", result);
        break;
    case 'X':
        result = (num1 > num2) ? num1 : num2;
        printf ("Result: %.2lf\n", result);
        break;
    case 'I':
        result = (num1 < num2) ? num1 : num2;
        printf ("Result: %.2lf\n", result);
        break;
}
break;
case 'U':
printf ("you have chosen Unary Operations\n");
printf ("[S] square root\n");
printf ("[L] Log\n");
printf ("[E] Exponential\n");
printf ("[C] Ceiling\n");
printf ("[F] Floor\n");
printf ("[R] Reciprocal \n");
printf ("Enter the operator: ");
scanf (" %c", &op);
op = toupper(op);
printf ("Enter num1: ");
scanf ("%lf", &num1);
switch (op) {
    case 'S':
        if (num1 >= 0) {
            result = sqrt(num1);
            printf ("Result: %.2lf\n", result);
        } else {
            printf ("Error: Square root of negative number or zero is not allowed.Goodbye!\n");
        }
        break;
    case 'L':
        if (num1 > 0) {
            result = log(num1);
            printf ("Result: %.2lf\n", result);
        } else {
            printf ("Error: Logarithm of non-positive number is not allowed.Goodbye!\n");
        }
        break;
    case 'E':
        result = exp(num1);
        printf ("Result: %.2lf\n", result);
        break;
    case 'C':
        result = ceil(num1);    
    printf ("Result: %.2lf\n", result);
        break;
    case 'F':
        result = floor(num1);
        printf ("Result: %.2lf\n", result);
        break;
    case 'R':
        if (num1 != 0) {
            result = 1.0 / num1;
            printf ("Result: %.2lf\n", result);
        } else {
            printf ("Error: Reciprocal of zero is not allowed.Goodbye!\n");
        }
        break;
}
break;
case 'E':
printf ("\nExiting the program.Goodbye!\n");
break;
}
}while (choice != 'E');
return 0;
}