#include <stdio.h>
/*printing the size of the variables
 */
int main(void)
{

  char x;
  int y;
  long int z;
  long long int w;
  float u;
  
  printf("Size of a char is :%lu byte(s)\n", (unsigned long)sizeof(x));
  printf("Sizze of an int is :%lu byte(s)\n", (unsigned long)sizeof(y));
  printf("Size of long int is:%lu byte(s)\n", (unsigned long)sizeof(z));
  printf("Size of long long int:%lu byte(s)\n",(unsigned long)sizeof(w));
  printf("Size of a float is:%lu byte(s)\n", (unsigned long)sizeof(u));

  return (0);
}
