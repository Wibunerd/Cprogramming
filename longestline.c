#include <stdio.h>
#define MAXLINE 1000

//get_line returns the number of character that s hold
int get_line(char s[], int lim){
  int i, c;
  for(i = 0; (c = getchar()) != EOF && i< lim -1 && c!='\n'; ++i){

  if (c =='\n'){
    s[i]= c;
    ++i;
  }
}
  s[i] ='\0';
  return i;
}

// copy() copy text from from[] to to[]
void copy(char from[], char to[]){
  int i =0;

  while(from[i] !='\0'){
    to[i]=from[i];
    i++;
  }
}

int main(){
  char line[MAXLINE];// input line
  char maxline[MAXLINE];//current longest line
  int len;// length of current line
  int maxlen;// length of current longest line

  maxlen = 0;
  while((len = get_line(line, MAXLINE))>0 ){
    if (len >maxlen){
      maxlen = len;
      copy(line, maxline);
    }
  }
  if (maxlen > 0){
    printf("Current longest line: %s\t%d\n", maxline, maxlen);
  }

  return 0;
}
