#include <stdio.h>
/*
Color	  |   Foreground Code	  | Background Code
Black           30	                   40
Red             31	                   41
Green           32	                   42
Yellow          33	                   43
Blue            34	                   44
Magenta         35	                   45
Cyan            36	                   46
White           37	                   47
*/
void red () {
  printf("\033[1;31m");
}
void yellow() {
  printf("\033[1;33m");
}
void reset () {
  printf("\033[0m");
}
int main () {
  red();
  printf("Hello ");
  yellow();
  printf("world\n");
  reset();
  return 0;
}