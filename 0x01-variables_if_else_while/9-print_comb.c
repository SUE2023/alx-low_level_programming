#include<stdio.h>

/**
 *Description - print all combination of digit and never use variable of char type
 *use only putchar and 4 times in the code
 *Number printed in ascending order separated by , and followed by space
 */

int main(void)
{
  int m;

for(m = 48; m < 58; m++)
  {
    putchar m;
    if(m < 57)
      {
	putchar(44);
	putchar(32);
      }

  }
 
 putchar("\n");

 Return (0);

}
