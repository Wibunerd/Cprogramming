#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
  int num, ran1, ran2, dice, i;
  srand(time(NULL));
  scanf("%d", &num);
  printf("%d\t%d \n ", num, abs(num));//abs = absolute value

  ran1 = pow(3, 4);// 3^4
  ran2 = sqrt(25);//25^1/2

  printf("%d\n%d\n", ran1, ran2);

  for (i = 0; i < 20; i++) {
    dice = (rand()%6) + 1;
    printf("%d\n", dice);

  }




  return 0;
}
