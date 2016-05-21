/* 
 * File:   main.c
 * Author: Evan Oliver 0747914
 *
 * Created on May 20, 2016, 5:07 PM
 */

#include "Fraction.h"
#include <stdio.h>
#include <stdlib.h>

Fraction * create_fraction(int numer, int denom) {

    Fraction * temp = malloc(sizeof (Fraction)*1);

    temp->numerator = numer;
    temp->denominator = denom;

    return (temp);
}

void destroy_fraction(Fraction *fractOne){
    
    free(fractOne);
}

Fraction * add(Fraction *fractOne, Fraction *fractTwo) {

    Fraction * result = malloc(sizeof (Fraction)*1);

    int largeCommonDenominator;

    int part1, part2, numeratorResult;

    largeCommonDenominator = fractOne->denominator * fractTwo->denominator;

    part1 = fractTwo->denominator * fractOne->numerator;

    part2 = fractOne->denominator * fractTwo->numerator;
    numeratorResult = part1 + part2;
    result->numerator = numeratorResult;
    result->denominator = largeCommonDenominator;

    return result;
}

Fraction * multiply(Fraction *fractOne, Fraction *fractTwo){
    Fraction * result = malloc(sizeof(Fraction)*1);
    
    result->numerator = fractOne->numerator * fractTwo->numerator;
    result->denominator = fractOne->denominator * fractTwo->denominator;
    
    return result;
}

int getNumer(Fraction *fractOne) {
    return fractOne->numerator;
}

int getDenom(Fraction *fractOne) {
    return fractOne->denominator;
}
