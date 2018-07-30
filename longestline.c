#include <stdio.h>
define MAXLINE 1000

//get_line returns the number of character that s hold
int get_line(char s[], int lim){
  int i, c;
  for(i = 0; (c = getchar()) != EOF && i< lim -1 && c!='\n'; ++i);

  if (c =='\n'){
    s[i]= c;
    ++i;
  }
  s[i] ='\0';
  return i;
}

// copy() copy text to
void copy(char from[], char to[]){
  int i =0;

  while(from[i] !='\0'){
    to[i]=from[i];
    i++;
  }
}

int main(){
  int
}
