#include <stdio.h>
#include <stdlib.h>

int main(){

  FILE * fPointer;
  fPointer = fopen("hello.txt", "w+");//write files first then read it

  fputs("Pass by value is what a normal function do", fPointer);

  fseek(fPointer, 13, SEEK_SET); //the file pointer is now at the 42th character of the files
  //SEEK_SET goes onwards whereas SEEK_END goes backwards
  fputs(" only pass the value of the variable and does not store the result in that variable later on.\n", fPointer);

  fseek(fPointer, 108, SEEK_SET);
  fputs("Pass by reference passes the whole address of the variable in (pointer) which means that the value will be stored in the pointer later on\n", fPointer);

  fseek(fPointer, 247, SEEK_SET);
  fputs("Note that an array with no value is a pointer or some sort I guess??\n", fPointer);

  fclose(fPointer);
  return 0;
}
