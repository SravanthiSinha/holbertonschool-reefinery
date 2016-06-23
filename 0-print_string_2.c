int print_char(char);

/* a fucntion to print only one character out of two,
   starting with the first one*/
void print_string_2(char *str)
{
  int i;
  i = 0;

  while(str[i])
    {
      if(i%2 == 0)
	print_char(str[i]);
      i++;
    }
  print_char('\n');
}
