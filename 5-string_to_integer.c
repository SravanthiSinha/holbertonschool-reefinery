#include "limits.h"

/* a fucntion to check whwther input is a number*/
int is_number(char c, int option)
{
  if (option == 0)
    {
      if(c == 45)
	return -1;
      else if(c >= 48 && c <= 57)
	return c - 48;
      return (10);
    }
  else
    {
      if(c >= 48 && c <= 57)
	return 1;
    }
  return 0;
}


/* a function that returns the
 first number contained in a string.*/
int string_to_integer(char *s)
{
  int i;
  int no;
  int r;
  int sign;
  
  for(i = 0, no = 0, sign = -1; s[i] != '\0'; i++)
    {
      r = is_number(s[i],0);
      if (r == -1 && !(is_number(s[i-1],1)))
	sign *= r;
      else if(r != 10)
	if (no < INT_MIN/10 || (no == INT_MIN/10 && no == 9))
	  return 0;
        else
	  no = (no *10) -r;
      else if(is_number(s[i-1],1))
	break;
    }
  if(sign < 0 && no == INT_MIN)
    return 0;
  else
    no *= sign;
  return no;
}
