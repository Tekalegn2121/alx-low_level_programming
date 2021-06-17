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
  
  printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(x));
  printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(y));
  printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(z));
  printf("Size of a long long int:%lu byte(s)\n",(unsigned long)sizeof(w));
  printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(u));

  return (0);
}
