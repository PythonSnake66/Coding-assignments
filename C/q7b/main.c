/* 7. The sieve of Eratosthenes is a method for generating lists of primes. Start with a list of integers,
say
2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19.
Mark every multiple of two (excluding two itself, so 4, 6, 8, . . .):
2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19.
Then go to the next unmarked number, which is three, and mark all its multiples (6, 9, 12, . . .):
2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19.
Continue this process up to and including the greatest integer ≤√19. The numbers that remain
unmarked are prime.
(a) Implement the sieve of Eratosthenes in C. Use your implementation to find all primes less
than or equal to a given natural number N.
(b) The algorithm that we have described could be optimized by excluding all even numbers from
the list. This optimization enables us to halve the amount of required memory. Implement an
alternative version of the sieve making use of this optimization.
(Split your program into functions and divide them between files in an ordered way.)*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Input N \n");
    scanf(" %d", &N);
    primeSearch(N);
    return 0;
}
