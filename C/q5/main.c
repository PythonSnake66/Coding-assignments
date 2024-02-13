/* 5.When his teacher asked Sleepy to simplify the fraction 26/65, he simply cancelled the digit 6 both
from the numerator and denominator. To the teacher’s amazement, Sleepy’s cancellation technique
produced the correct result:
26/65 =2/5.
Write a program to determine all the fractions with two-digit numerators and denominators for
which Sleepy’s technique gives the right answer. (Split your program into functions and divide
them between files in an ordered way.)*/


#include "q5header.h"

int main(){
    for (int i=10; i<= 99; i++){
        for (int j=10; j<=99; j++){
            int sNumerator;
            int sDenominator;
            simplify(i, j, &sNumerator, &sDenominator);
            check(i, j, sNumerator, sDenominator);
        }
    }
    return 0;
}
