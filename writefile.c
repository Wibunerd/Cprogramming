#include <stdio.h>
#include <stdlib.h>

int main(){

  FILE * fPointer;
  fPointer = fopen("hello.txt", "w");//write files

  fprintf(fPointer, "Hell, World!\nMy name is Mickey\n Nice to meet ya!");

  fclose(fPointer);

  return 0;
}
