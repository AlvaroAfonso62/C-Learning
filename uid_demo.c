#include <stdio.h>

void main(){

  printf("real uid: %d\n", getuid());
  printf("effective uid: %d\n", geteuid());

}
