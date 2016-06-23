#include <stdio.h>

/* a program that finds and prints the largest prime 
factor of the number 612852475143, followed by a new line. */
int main(void)
{

  unsigned long n;
  unsigned long div;
  unsigned long max;
  
  n =  612852475143;
  div = 2;
  
  while(n != 0)
    {
      if ( n % div != 0)
	div = div + 1;
      else{
	
	  max = n;
	  n = n / div;
	  
	  if (n == 1){
	    printf("%ld\n",max);
	    break;
	    }
	}
    }
  return 0;
}
