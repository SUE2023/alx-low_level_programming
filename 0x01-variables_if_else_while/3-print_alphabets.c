#include<stdio.h>

/**
 *Printing alphabets in lowercase then uppercase
 *Use of putchare and only 3 times within the code
 */

int main(void)
{
  int alphabets;

  /*print lowercase letters */

  for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
    {
      putchar(alphabets);
      putchar('\n');
    }
  /*print uppercase letters */
  for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
    {
      putchar(alphabets'\n');
    }
  getch();
}
