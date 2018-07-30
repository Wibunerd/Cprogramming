#include <stdio.h>
#include <stdlib.h>


int main(){
  int var = 9;
  int * pVar = &var;

  printf("%p\n", &var);
  printf("%p\t %p\t %d\n", &pVar, pVar, *pVar);
printf("-----------------------------------------\n\n\n\n" );
/*===============================================================*/
  int array[5]={456, 546, 643, 453, 123};
  int i = 0;

  while(i<5){
    printf("%d\t%p\n", array[i], &array[i]);
    i++;
  }
  printf("\n%d\t%p",*array ,&array);
  printf("\n%d\t%p",array ,&array);
  printf("\n%d\t%p",*(array+3) ,&array);
printf("\n-----------------------------------------\n\n\n\n" );
/*=============================================================*/

  char movie[] = "Pepsi man";
  char * pMovie = "TF is with the Pepsi man meme";

  puts(pMovie);

  pMovie = "Hey we can change this sh1t";
  puts(pMovie);

printf("-----------------------------------------\n\n\n\n" );


  char film[30];
  char * pFilm = film;

  fgets(pFilm, 30, stdin);
  puts(pFilm);

printf("-----------------------------------------\n\n\n\n" );

  return 0;
}
