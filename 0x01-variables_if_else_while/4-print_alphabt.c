#include <stdio.h>

/**
 *Description- Print alphabets in lowercase q and e ommitted
 *Use putchar only 2 in the code
 */

int main(void)
{
  char alphabet, q, e;
  q = 'q';
  e = 'e';

  for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
      if (alphabet != e && != q)
      putchar(alphabet);
    }
  putchar('\n');

  return (0);
}
