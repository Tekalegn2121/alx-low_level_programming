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
  
  printf("The size of a char is :%lu byte(s)\n", (unsigned long)sizeof(x));
  printf("The size of an int is :%lu byte(s)\n", (unsigned long)sizeof(y));
  printf("The size of long int is:%lu byte(s)\n", (unsigned long)sizeof(z));
  printf("The size of long long int:%lu byte(s)\n",(unsigned long)sizeof(w));
  printf("The size of a float is:%lu byte(s)\n", (unsigned long)sizeof(u));

  return (0);
}
