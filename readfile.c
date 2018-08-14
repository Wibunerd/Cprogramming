#include <stdio.h>
#include <stdlib.h>

int main(){

  FILE * fPointer;


  fPointer = fopen("hello.txt", "r");//read and print out files

  char singleline[1000];

  while(!feof(fPointer)){
    fgets(singleline, 1000, fPointer);
    puts(singleline);

  }

  fclose(fPointer);



  return 0;

}
