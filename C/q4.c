// 4. Write a program which reads in 200 characters and outputs them in reverse order. Do not use
// arrays. Hint: use recursion.

// In this code, the user is expected to input the 200 characters and then press enter. Code also
// works if a number of chars, different from 200 is inputted.

#include <stdio.h>
void reader(int count)
{
    char c=getchar();
    if (c!='\n')   // Check for newline character
    {
        reader(count + 1);
    }
    if (c!='\n')
    {
        printf("%c", c);
    }
}
int main()
{
    reader(0);
    return 0;
}

