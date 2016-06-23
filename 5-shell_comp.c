/* recursive match strings for shell compare*/
int match(char *a, char *b)
{
  /*check if we reach the end of both the strings*/
  if(*a == '\0' && *b == '\0')
    return 1;
  
  /*check if we reach first string end
    and iterate through second string */
  if(*b == '*' && *(b+1) != '\0' && *a == '\0')
    return 0;
  
  /*check exact match and jump*/
  if (*a == *b)
    return match(a+1,b+1);

  /*move till * is finished in second string */
  if(*b == '*')
    return match(a+1, b) || match(a, b+1);
  
  return 0;
}



/*a function that compares two strings and returns 1 
if the strings can be considered as identical,
and 0 otherwise.*/

int shell_comp(char *s1, char *s2)
{
  return match(s1,s2) ? 1: 0; 
}
