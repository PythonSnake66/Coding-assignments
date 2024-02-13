/* 2. How many times will the loops defined by the following for loops be executed?
(a) for (i=10; i<=10; i++);
(b) for (i=10; i<10; i++);
(c) for (i=10; i>=1; i-=4);
(d) for (i=10; i==1; i-=4);*/

#include <stdio.h>
int main()
{
    int counter=0;
    for (int i=10; i<=10; i++)
    {
        counter++;
    }
    printf("Part (a) answer: %d \n", counter);

    counter=0;
    for (int i=10; i<10; i++)
    {
        counter++;
    }
    printf("Part (b) answer: %d \n", counter);

    counter=0;
    for (int i=10; i>=1; i-=4)
    {
        counter++;
    }
    printf("Part (c) answer: %d \n", counter);

    counter=0;
    for (int i=10; i==1; i-=4)
    {
        counter++;
    }
    printf("Part (d) answer: %d \n", counter);

    // Answers: (a):1, (b):0, (c): 3, (d):0
    return 0;
}
