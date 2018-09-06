/*
 * This program tells the user the factorial of whichever number he desires.
 *
 * Author: Gerardo González Becerril.
 * E-mail: a01411981@itesm.mx
 * Date: September 6, 2018.
 */

#include<stdio.h>

int main(){

    // Variables for the factorial, the number the user wants the factorial of and the number that'll go through the
    // loop until becoming the user's desired number.
    int factorial = 1, n, i = 1;

    printf("What number would you like the factorial of? "); // Asks the user for a number.
    scanf("%d",&n); // Takes the user's input.

    // If statement that checks whether n is smaller than 0.
    if (n < 0) {

        printf("Negative numbers don't have a factorial."); // Tells the user his/ her input is unacceptable.

    } else {

        // While loop that multiplies the factorial variable by the changing value of i.
        while (i <= n) {
            factorial *= i;
            i++;
        }

        printf("The factorial of %d is: %d.", n, factorial); // Tells the user the result.

    }

    return 0;

}