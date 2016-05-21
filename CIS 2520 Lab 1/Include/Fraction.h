/* 
 * File:   main.c
 * Author: Evan Oliver 0747914
 *
 * Created on May 20, 2016, 5:07 PM
 */

typedef struct {
  
  int integer;
  
  int numerator;
  
  int denominator;
  
} Fraction;
  
Fraction * create_fraction(int numer, int denom);

void destroy_fraction(Fraction *fractOne);

int getNumer(Fraction *fractOne);

int getDenom(Fraction *fractOne);
  
Fraction * add(Fraction *fractOne, Fraction *fractTwo);

Fraction * multiply(Fraction *fractOne, Fraction *fractTwo);