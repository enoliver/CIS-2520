/* 
 * File:   main.c
 * Author: Evan Oliver 0747914
 *
 * Created on May 20, 2016, 5:07 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "Fraction.h"

int main(void) {
    Fraction * myFraction = create_fraction(1, 2);

    Fraction * myOtherFraction = create_fraction(3, 4);

    Fraction * theAnswer = add(myFraction, myOtherFraction);

    printf("%d/%d is the answer from addition", theAnswer->numerator, theAnswer->denominator);

    theAnswer = multiply(myFraction, myOtherFraction);

    printf("%d/%d is the answer from multiplication", theAnswer->numerator, theAnswer->denominator);

    destroy_fraction(theAnswer);
    destroy_fraction(myFraction);
    destroy_fraction(myOtherFraction);

    return 0;
}
