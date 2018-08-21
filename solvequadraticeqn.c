/* This is the program that solve a quadratic equation
  imaginary roots will not be included
*/
#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,d,root1,root2;

  printf("Enter a, b and c in the form ax^2 + bx + c\n");
//get input from user
  printf("Enter a\n");
  if(scanf("%f", &a)==0){
    printf("Enter numbers only\n");
  }else {
    printf("Enter b\n");
    
    if(scanf("%f", &b)==0){
      printf("Enter numbers only\n");
    }else {
      printf("Enter c\n");
      
      if(scanf("%f", &c)==0){
        printf("Enter numbers only\n");
    }else{
      d = b*b-4*a*c;//calculate delta
        //check for special cases
      if(a==0){
         if(b==0){
            printf("There are no roots");
          }else{
            root1 = -c/b;
             printf("The equation has one root: %f", root1);
             }
      }else{
        if(d<0){      //check delta
         printf("There are no real roots");
         
         }else if(d==0){
            root1 = -b/(2*a);
            printf("The equation has 2 equal roots: %f", root1);
            }else{
              root1 = (-b+sqrt(d))/(2*a);
              root2 = (-b-sqrt(d))/(2*a);
             printf("The equation has 2 roots:%f\t%f", root1, root2);
             }
          }
        }
      }
    }
 return 0;
}
