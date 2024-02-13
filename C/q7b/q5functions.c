#include "q5header.h"

// This function computes the standardized fraction when give an (unstandardized numerator and denominator).
void simplify(int numerator, int denominator, int *sNumerator, int *sDenominator)
{
    *sNumerator=numerator;
    *sDenominator=denominator;
    for (int i=2; i<=numerator/2; i++)
    {
        if (*sNumerator%i==0 && *sDenominator%i==0)
        {
            *sNumerator=*sNumerator/i;
            *sDenominator=*sDenominator/i;
            i--;
        }
    }
}

// This function checks if Sleepy's cancellation technique works. A total of 4 checks must be performed.
void check(int numerator, int denominator, int sNumerator, int sDenominator)
{
    if ((numerator/10==sNumerator && denominator/10==sDenominator) || (numerator/10==sNumerator && denominator%10==sDenominator) || (numerator%10==sNumerator && denominator/10==sDenominator) || (numerator%10==sNumerator && denominator%10==sDenominator))
    {
        printf("%d/%d\n", numerator, denominator);
    }
}

