#include <stdio.h>
#include <stdlib.h>

int main(){

  FILE * fPointer;
  fPointer = fopen("hello.txt", "a");//append files

  fprintf(fPointer, "\n  -Written by Dman");

  fclose(fPointer);

  return 0;
}
