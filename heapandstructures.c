#include <stdio.h>
#include <stdlib.h>
#include "structheader.h"

int main(){

  int*pPointer;

  pPointer = (int *) malloc(10 * sizeof(int));//(int*)is a typecast

  free(pPointer);//free unallocated memories
  //////////////////////////////////////////////////////////////////
  printf("\n------------------------------------------\n");

  int i, howMany, total =0;
  float avr=0.0;
  int*pPointsArray;

  printf("How many numbers do u wanna average?\n");
  scanf("%d", &howMany);

  pPointsArray = (int *) malloc(howMany * sizeof(int));

  printf("Enter the numbers:\n");

  for(i=0; i<howMany; i++){
    scanf("%d", &pPointsArray[i]);
    total += pPointsArray[i];
  }
  avr = (float)total/(float)howMany;
  printf("Here is your answer:%f\n", avr);
  //////////////////////////////////////////////////////////////////
  printf("\n------------------------------------------\n");

  struct user Duong;
  struct user Mike;

  Duong.ID = 1;
  Mike.ID = 2;

  puts("Enter the first name of user 1");
  gets(Duong.firstName);//sth is wrong with this idk why it doesn't run
  puts("Enter the first name of user 2");
  gets(Mike.firstName);

  printf("ID\t First name \n");
  printf("%d\t %s         \n", Duong.ID, Duong.firstName);
  printf("%d\t %s         \n", Mike.ID, Mike.firstName);





  return 0;
}
