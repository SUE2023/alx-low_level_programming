#include <stdio.h>
#include <conio.h>

/**
 *Printing alphabets in lowercase then uppercase
 *Use of putchare and only 3 times within the code
 */

int main(void)
{
  int char;
  clrscr();

  /*print uppercase letters*/

  for(ch = 'A'; ch <= 'Z'; ch++)
    {
      putchar(ch);
      putchar("\n");
    }
  
  /*print lowercase letters*/

  for(ch = 'a'; ch <= 'z'; ch++)
    {
      putchar(ch);
      putchar("\n");
    }
  
  getch();
  
}

