// 3. Write a program that reads numbers until a negative number is read and prints out the number of
// values read, the largest value, the smallest value, and the range.

#include <stdio.h>
#include <math.h>
int main()
{
    int numbers=0;
    float max = - INFINITY, min = INFINITY, range;
    float newNumber;

    while(1)
    {
        scanf(" %f", &newNumber);
        if(newNumber<0)
        {
            break;
        }
        if(newNumber>max)
        {
            max=newNumber;
        }
        if(newNumber<min)
        {
            min=newNumber;
        }
        numbers++;
    }
    printf("Number of values %d \n", numbers);
    printf("Largest number %f \n", max);
    printf("Smallest number %f \n", min);
    printf("Range: %f \n", max-min);
    return 0;
}

