#include <stdio.h>
#include <stdlib.h>
#include <stdtime.h>

int main(void)
{
  int n;
  
  srand(time(0));
  n = rand() - RAND_MAX /2;

  printf("%d \n", n);

  /* Code for printing random numbers*/
  if (n > 0)
    {
      print("The number is positive.\n");
    }
  else if (n < 0)
    {
      printf("The number is negative.\n");
    }
  else
    {
      printf("The number is zero.\n");
    }

  Return (0);
  
}
